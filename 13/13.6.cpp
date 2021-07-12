#include<iostream>
using namespace std;

void divide(double a,double b){
	double answer;
	try{
		if(b == 0)
			throw b;
	answer = a/b;
	cout<<answer;
	}catch(double a){
		cout<<"Dividing by zero, process terminated.\n";
	}catch(...){
		cout<<"Unhandled exception\n";
		throw;
	}
	
}

int main(){
	double a,b;
	try{
	cout<<"Enter two double numbers : "; 
	cin>>a;
	cin>>b;
	divide(a,b);
	}catch(char){
		cout<<"Wrong input, expected double, recieved char\n";
	}catch(string a){
		cout<<"Wrong input, expected double, recieved string\n";
	}
	
return 0;
}
