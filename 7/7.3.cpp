#include<iostream>
using namespace std;

class MAT{
	int mat[4][4];
	public:
		void getData();
		friend MAT operator+(MAT m1, MAT m2);
		friend MAT operator-(MAT m1, MAT m2);
		friend MAT operator*(MAT m1, MAT m2);
		friend MAT operator/(MAT m1, MAT m2);
		friend MAT operator%(MAT m1, MAT m2);
		friend ostream &operator<<(ostream &lightning, MAT m1);
};
	void MAT :: getData(){
		for(int i=0;i<4;i++){
			for(int j = 0;j<4;j++){
				cout<<"Enter Element at position ["<<i+1<<"]["<<j+1<<"] : ";
				cin>>mat[i][j];
			}
		}
	system("cls");	
	}
	MAT operator+(MAT m1, MAT m2){
		MAT temp;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				temp.mat[i][j] = m1.mat[i][j] + m2.mat[i][j];
			}
		}
		return temp;
	}
	
	MAT operator-(MAT m1, MAT m2){
		MAT temp;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				temp.mat[i][j] = m1.mat[i][j] - m2.mat[i][j];
			}
		}
		return temp;
	}
	
	MAT operator*(MAT m1, MAT m2){
		MAT temp;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				temp.mat[i][j] = m1.mat[i][j] * m2.mat[i][j];
			}
		}
	return temp;
	}
	
	MAT operator/(MAT m1, MAT m2){
		MAT temp;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				temp.mat[i][j] = m1.mat[i][j] / float(m2.mat[i][j]);
			}
		}
		return temp;
	}
	
	
	MAT operator%(MAT m1, MAT m2){
		MAT temp;
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				temp.mat[i][j] = m1.mat[i][j] % m2.mat[i][j];
			}
		}
		return temp;
	}
	
	ostream &operator <<(ostream &lightning, MAT m1){
		for(int i=0;i<4;i++){
			for(int j=0;j<4;j++){
				lightning.width(10);
				lightning.setf(ios::right);
				lightning.precision(5);
				lightning<<m1.mat[i][j]<<" ";
			}
			lightning<<endl;
		}
		cout<<endl;
		return lightning;
	}	
	
int main(){
	MAT m1,m2,m3;
	cout<<"Enter the first matrix : "<<endl;
	m1.getData();
	cout<<"Enter the second matrix : "<<endl;
	m2.getData();
	
	cout<<"Addition of matrices : "<<endl;
	m3 = m1+m2;
	cout<<m3;
	
	cout<<"Subtraction of matrices : "<<endl;
	m3 = m1-m2;
	cout<<m3;
	
	cout<<"Multiplication of matrices : "<<endl;
	m3 = m1*m2;
	cout<<m3;
	
	cout<<"Division of matrices : "<<endl;
	m3 = m1/m2;
	cout<<m3;
	
	cout<<"Modulous of matrices : "<<endl;
	m3 = m1%m2;
	cout<<m3;
	
return 0;
}
