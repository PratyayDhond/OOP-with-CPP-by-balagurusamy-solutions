#include<iostream>
#include<string>
using namespace std;


void concateUsingPlus(string s1, string s2, string s3){
	string str = s1+s2+s3;
	cout<<str<<endl;
}

void concateUsingAppend(string s1,string s2, string s3){
	string str;
	str.append(s1.append(s2.append(s3)));
	/*
	str.append(s1);
	str.append(s2);		Same as above
	str.append(s3);
	*/
	cout<<str<<endl;
}

int main(){

string s1,s2,s3;
	cout<<"Enter three words : ";
	cin>>s1>>s2>>s3;
	
	concateUsingPlus(s1,s2,s3);
		
	concateUsingAppend(s1,s2,s3);
	

return 0;
}
