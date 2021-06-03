#include<iostream>
#include<cstring>
using namespace std;

class String{
	string a;
	public:
		String(string b){
			a = b;
		}
		
		friend void operator==(String s1, String s2){
			for(int i=0;i<=s1.a.size();i++){
				if(s1.a[i] != s2.a[i]){
					cout<<s1.a<<" and "<<s2.a<<" ";
					cout<<"aren't equal"<<endl;
					return;
				}else{
					cout<<s1.a<<" and "<<s2.a<<" ";
					cout<<"are equal"<<endl;
					return;
				}
			}
			return;
		}
};

int main(){
	String s1("Hello"),s2("Hello");
	s1==s2;
	
	String s3("Hello"),s4("World");
	s3==s4;
return 0;
}
