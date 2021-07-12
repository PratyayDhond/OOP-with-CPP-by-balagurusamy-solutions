#include<iostream>
using namespace std;

template<class T>  
void genericCatch(T a){
	try{
		throw a ;
	}catch(...){
		cout<<"Caught an exception : "<<a<<endl;
	}
} 
  
int main(){
	genericCatch('a');
	genericCatch(5);
	genericCatch(3.5);
	genericCatch("Hello World");
return 0;
}
