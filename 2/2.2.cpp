#include<iostream>
using namespace std;
int main(){
	int no1,no2;
	cin>>no1>>no2;
	
	if(no1>no2){
		cout<<no1;
	}
	if(no2>no1){
		cout<<no2;
	}
	if(no1 == no2){
		cout<<"Both numbers are equal";
	}

return 0;
}
