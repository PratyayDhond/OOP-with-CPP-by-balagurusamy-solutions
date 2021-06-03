#include<iostream>
#include<iomanip>
using namespace std;

class matrix{
	private:		
		int mat[3][3];
	public:
		void getData();
		void display();
		friend matrix mul(matrix a, matrix b);		
};

void matrix :: getData(){
	cout<<"Enter Matrix : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"Enter element at position ["<<i<<"]["<<j<<"] : ";
			cin>>mat[i][j];
		}
	}
}

void matrix :: display(){
	cout<<"Matrix : "<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<setw(3)<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}				

matrix mul(matrix a,matrix b){
	matrix temp;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			temp.mat[i][j] = a.mat[i][j] * b.mat[i][j];
		}
	}
	return temp;	
}				
	
int main(){
	matrix m1,m2,m3;
	m1.getData();
	m2.getData();
	m3 = mul(m1,m2);
	m3.display();

return 0;
}
