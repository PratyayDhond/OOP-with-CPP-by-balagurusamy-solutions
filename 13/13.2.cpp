#include<iostream>
using namespace std;

template <class T>
void multipleCatch(T a){
	try{
		throw a;
	}catch(char a){
		cout<<"Chaught a character : "<<a<<endl;
	}catch(int a){
		cout<<"Chaught an integer  : "<<a<<endl;
	}catch(double a){
		cout<<"Chaught a double    : "<<a<<endl;	
	}	
}


int main(){

	multipleCatch('a');
	multipleCatch(5);
	multipleCatch(5.7);


return 0;
}
