#include<iostream>
#include<iomanip>
using namespace std;

long long fact(long long n){
	if(n==0){
		exit(1);
	}
	if(n==1){
		return 1;
	}else{
		return (fact(n-1));
	}
}
int main(){
	cout<<"Hello World!"<<endl; 

return 0;
}
