#include<iostream>
#include<string>
using namespace std;

int main(){

	string str;
	getline(cin,str);
	string :: iterator it = str.begin(); 
	
	while(it != str.end()){
		if(*it == ' '){
			*it = '_';
		}
		it++;
	}
	cout<<str;
return 0;
}
