#include<iostream>
using namespace std;

class FLOAT{
	float area;
	public:
		FLOAT(float a){
			area = a;
		}
		void show(){
			cout<<"Area : "<<area<<endl;
		}
		void operator +(float a){
			area += a;
		}
		
		void operator -(float a){
			area -= a;
		}
		
		void operator *(float a){
			area *= a;
		}
		void operator /(float a){
			area /= a;
		}
};

int main(){
	FLOAT f1(20.50);
	f1+5;
	f1.show();
	f1-5;
	f1.show();
	f1*5;
	f1.show();
	f1/5;
	f1.show();
	
return 0;
}
