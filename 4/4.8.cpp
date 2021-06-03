#include<iostream>
using namespace std;

double power(double m, int n){
	if(m == 0 ){
		return 0;		
	}
	
	if(n==0){
		return 1;
	}
	
	while(n>0){
		m = m *(power(m,n-1));
		return m;
	}
	return 0;
				
}

int power(int m, int n){
	if(m == 0 ){
		return 0;
	}
	if(n==0){
		return 1;
	}
	
	while(n>0){
		m = m *(power(m,n-1));
		return m;
	}
	return 0;			
}

int main(){
	double a;
	int c;
	int b;
	cin>>a>>c>>b;
	cout<<a<<" to the power "<<b<<" = "<<power(a,b)<<endl;
	cout<<c<<" to the power "<<b<<" = "<<power(c,b);
return 0;
}

