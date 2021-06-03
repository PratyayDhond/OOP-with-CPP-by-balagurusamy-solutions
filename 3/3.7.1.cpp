#include<iostream>
#include<cmath>
using namespace std;

float fact(int n){
	while(n>0){
		if(n==1){
			return 1;
		}else{
			return (n*fact(n-1));
		}
	}
	return 0;
}

int main(){
	int n;
	cout<<"Enter a odd no : ";
	cin>>n;
	if(n%2 == 0){
		cout<<"Number entered is not odd. deducting one from number.";
		n--;
	}
	
	int a;
	cout<<"Enter a value : ";
	cin>>a;
	
	float x = 0;
	for(int i=1;i<=n;i=i+2){
		float temp = (pow(a,i)/float(fact(i)));
	//	cout<<endl<<pow(a,i)<<endl<<fact(i)<<endl<<(pow(a,i)/float(fact(i)))<<endl;
		x += temp; 
	}
	
	cout<<"Sin x : "<<x;

return 0;
}
