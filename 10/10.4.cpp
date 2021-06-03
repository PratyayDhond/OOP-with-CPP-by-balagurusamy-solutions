#include<iostream>
#include<iomanip>
using namespace std;

long double fact(int n){
	while(n>0){
		if(n==1){
		return 1;
	}else{
		return (n * fact(n-1));
	}
	}
return 0;	
}
int main(){
	int n;
	cin>>n;
	long double factorial;
	long double temp;
		//cout<<1/double(fact(2));
	for(int i=1;i<=n;i++){
	//	cout<<fact(i)<<endl;
		temp = 1/(long double)(fact(i));
	//	cout<<temp<<endl;
		factorial= factorial + temp;
	}
	
	cout.setf(ios::scientific);
	cout.precision(4);
	cout<<"e = "<<factorial<<endl;

return 0;
}
