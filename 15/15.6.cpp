/*
input  :
	 	 It is new. It is singular.
		 It is simple. It must succeed!
output : 
		 4
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

string str;
string str1;
int count = 0;

getline(cin,str);
getline(cin,str1);

str.append(str1);
string ::iterator it = str.begin();


while(it != str.end()){
   if(*it == 'I' && *(it+1) == 't'){
   	count++;
   }
   it++;
}

cout<<count<<endl;
return 0;
}
