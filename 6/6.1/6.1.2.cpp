#include<iostream>
using namespace std;
 class vector{
 	private:
	 	int size;
 		float *p;
 	public:
 		void CreateVector();
		void Modify();
		void multiplyByScalor();
		void display();	
		vector(){
			size = 0;
		}
 };
 
 void vector :: CreateVector(){
 	cout<<"Enter Size of Vector : ";
 	cin>>size;
 	p = new float[size];

	for(int i = 0;i<size;i++){
		cout<<"Enter element no. "<<i+1<<" : ";
		cin>>p[i];
		}
	}
 
  void vector :: Modify(){
  	  int pos,n;
	  cout<<"Enter Position of element to modify : ";
	  cin>>pos;
	  cout<<"Enter new element : ";
	  cin>>n;
	  p[pos-1] = n;
	  }
  
  void vector :: multiplyByScalor(){
  	int n;
	cout<<"Enter a scalor number : ";
  	cin>>n;
  	for(int i=0;i<size;i++){
  		p[i] = p[i] * n;
	}
  }
  
  void vector :: display(){
  	cout<<endl<<"Vector : ";
	  for(int i = 0;i<size;i++){
  		cout<<p[i]<<" ";
	  }
	  cout<<endl;
  }
  	
int main(){
	vector v1;
	v1.CreateVector();
	v1.display();
	v1.Modify();
	v1.display();
	v1.multiplyByScalor();
	v1.display();
return 0;
}
