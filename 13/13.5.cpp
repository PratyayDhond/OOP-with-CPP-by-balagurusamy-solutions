#include<iostream>
using namespace std;

template<class T1,class T2>
void divide(T1 a, T2 b){
	try{
		if(sizeof(a) == 1){
			throw a;			
		}
		if(sizeof(b) == 1){
			throw b;
		}
	}catch(char a){
		cout<<"Caught a char "<<a<<endl;;
			throw;
	}
}

int main(){
	try{
		divide(4,'x');
	}catch(...){
		cout<<"Caught the exception in the main block\n";
	}
return 0;
}
