#include<iostream>
#include<string>
using namespace std;

int main(){

	string str("LightningHunter");
	string :: iterator it = str.begin();
	
	while(it != str.end()){
		cout<<*it++;
	}

return 0;
}
