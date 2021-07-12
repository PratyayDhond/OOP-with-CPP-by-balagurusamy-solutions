// Doesn't work as 'Dynamic exception specifications have been deprecated in C++11'

#include<iostream>
using namespace std;

void nonThrowable(int a) throw(int,double){
	
		if( a == 0){
			throw 'x';
		}else if(a == 1){
			throw 1;
		}else if(a == 2){
			throw 2.5;
		}else{
			throw("Hello There");
		}	
	
}

int main(){
	try{
		nonThrowable(1);
		nonThrowable(2);
		nonThrowable(0);
		nonThrowable(3);
		
	}catch(int a){
		cout<<"Caught an integer\n";
	}catch(float a){
		cout<<"Caught an float\n";
	}catch(char a){
		cout<<"Caught an character\n";
	}catch(double a){
		cout<<"Caught an double\n";
	}catch(...){
		cout<<"Caught an exception\n";
	}
	cout<<"End of throw-catch block \n";
}