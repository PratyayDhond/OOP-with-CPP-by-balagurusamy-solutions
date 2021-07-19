#include<iostream>
#include<string>
using namespace std;

int main(){

	int n;	// No of cities
	cin>>n;
	string str[n];
	while(n-->0){
		cin>>str[n];
	}
	
	for(auto a : str){
		if(toupper(a[0]) == 'B' || toupper(a[0])== 'C')
			cout<<a<<endl;
	}
	
return 0;
}
