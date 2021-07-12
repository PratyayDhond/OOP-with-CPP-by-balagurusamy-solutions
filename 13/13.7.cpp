#include<iostream>
using namespace std;

int input(){
	string str;
	int n;
try{
	cout<<"Enter an integer : ";
	cin>>str;
	n = stoi(str);
}catch(...){
	cout<<"Runtime exception. cannot convert non-integer using stoi\n";
	return -999999;
	throw;
}
	return n;	
}

void print(){
	try{
		int a = input();
		if(a == -999999){
			throw a;
		}
		cout<<a;
	}catch(int a){
		cout<<"Entered Print Block, rethrowing exception\n";
		throw a;
	}
}
int main(){
	try{
		print();
	}catch(...){
		cout<<"Caught an exception in main block\n";		
	}
return 0;
}
