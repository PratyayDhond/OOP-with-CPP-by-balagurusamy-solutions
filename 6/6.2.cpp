#include<iostream>
#include<string>
using namespace std;

class String{
		char s[10];
	public:
		String(){
		};
		String(char a[]){
			strcat(s,a);
		}
		void display();
		friend String join(String a, String b);
};

String join(String a, String b){		
//	cout<<strcat(a.s,b.s);
	String c;
	strcpy(c.s,strcat(a.s,b.s));
	return c;
}

void String :: display(){
	cout<<s<<endl; 
}

int main(){
	String s1,s2("Well Done!"),s3("YO"),s4;
	s1.display();
	s2.display();
	s4 = join(s2,s3);
	s4.display();
return 0;
}
