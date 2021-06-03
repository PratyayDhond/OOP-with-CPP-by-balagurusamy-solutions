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
		friend vector add(vector a, vector b);	
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
  
  vector add(vector a, vector b){
  	vector c;
  	//	c.size = a.size;
  		
  		if(a.size>b.size){
  			c.size = a.size;
  			for(int i=b.size;i<a.size;i++){
  				b.p[i] = 0;
			  }
		  }
		else if(b.size>a.size){
			c.size = b.size;
			for(int i=a.size;i<b.size;i++){
  				a.p[i] = 0;
			  }
		}
		else{
			c.size =a.size;
		}  
		c.p = new float [c.size];  
	  for(int i = 0;i<c.size;i++){
  		c.p[i] = a.p[i] + b.p[i];
  		//cout<<"HEHE";
	  }
	  return c;
  }
  	
int main(){
	vector v1,v2,v3;
	v1.CreateVector();
	v2.CreateVector();
	v3 = add(v1,v2);
	v3.display();
//	v1.display();
//	v1.Modify();
//	v1.display();
//	v1.multiplyByScalor();
//	v1.display();
return 0;
}
