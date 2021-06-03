#include<iostream>
#define PI 3.14
using namespace std;

float area(int radius){
		return(PI*radius*radius);
}

float area(int height,int breadth){
	return((height*breadth)/2);
}

int main(){
	
	int h,r,b;
	cin>>h>>r>>b;
	cout<<"Area of triangle : "<<area(h,b)<<endl;
	cout<<"Area of circle : "<<area(r)<<endl;

return 0;
}
