#include<iostream>
#include<string>
using namespace std;

class String{
		char *s;
		int len;
	public:
		String(){
			s = new char[20];
		};
		String(char a[]){
			len = strlen(strcat(s,a));
			s = new char[len+1];
			strcat(s,a);
		}
		void display();
		
		friend String join(String a, String b);
};

String join(String a, String b){		
//	cout<<strcat(a.s,b.s);
	String c;
	c.len = strlen(strcat(a.s,b.s));
	c.s = new char[c.len+1];
	strcpy(c.s,strcat(a.s,b.s));
	return c;
}

void String :: display(){
	cout<<s<<endl; 
}

int main(){
	String s1,s2("Hello"),s3("YO"),s4;
	s1.display();
	s2.display();
	s4 = join(s2,s3);
	s4.display();
return 0;
}
