#include<iostream>
using namespace std;

void swap(int & m,int & n){
	int temp;
	temp = m;
	m = n;
	n = temp;
	
}

int main(){
	int a,b;
	cout<<"Enter value of a : ";
	cin>>a;
	cout<<"Enter value of a : ";
	cin>>b;
	
	cout<<"Values before swap"<<endl
		<<"Value of a : "<<a<<endl
		<<"Value of b : "<<b<<endl;
	swap(a,b);
	cout<<"Values after swap"<<endl
		<<"Value of a : "<<a<<endl
		<<"Value of b : "<<b<<endl;
	
return 0;
}
