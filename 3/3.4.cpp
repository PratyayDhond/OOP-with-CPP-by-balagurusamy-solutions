#include<iostream>
using namespace std;
int main(){
	int n[10] = {1,2,3,4,5,6,7,8,9,10};
	float p[10] = {1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
	float r[11] = {0.10,0.11,0.12,0.13,0.14,0.15,0.16,0.17,0.18,0.19,0.20};
	float v[10];
	// p = Principal Amount
	// v = Value at the end of n years
	// n = time in years
	// r = rate of interest
	// a = amount
	
//	cout<<"Enter the Principal amount : ";
//	cin>>p; 
//	cout<<"Enter the Rate of Interest : ";
//	cin>>r;
//	cout<<"Enter the Time in years : ";
//	cin>>n;
	
	for(int j=0;j<10;j++){
		
	for(int i=0;i<n[j];i++){
		
	v[j] = p[j]*(1+r[j]);
	p[j] = v[j];	
	}	
	}
	
	for(int i = 0;i<10;i++){
		cout<<"Amount : "<<v[i]<<endl;
	}
	
return 0;
}
 