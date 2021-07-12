#include<iostream>
using namespace std;

int main(){
	int age;
try{
	cout<<"Enter your age : ";
	cin>>age;
	if(age<0)
		throw age;	
	cout<<"Age : "<<age<<endl;	
}catch(int a){
	cout<<"Caught Negative value for age."<<"\n";
	
}

return 0;
}
