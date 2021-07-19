#include<iostream>
#include<string>
using namespace std;

int main(){

	string str;
	getline(cin,str);
	char c;
	cin>>c;
	string :: iterator it = str.begin();
	int count;
	while(it != str.end()){
		if(*it++ == c)	
			count++;
	}
	cout<<count<<endl;

return 0;
}
