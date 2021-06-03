#include<iostream>
using namespace std;

double power(double m, int n){
	if(m == 0 ){
		
	}
	
	while(n>0){
		m = m *(power(m,n-1));
		return m;
	}
			
}

int main(){
	double a;
	int b;
	cin>>a>>b;
	cout<<a<<" to the power "<<b<<" = "<<power(a,b);

return 0;
}