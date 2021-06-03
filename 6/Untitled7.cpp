#include<iostream>
#include<string>
class string
{
char *str;
int length;
public:
string()
{
length = 0;
str = new char [length + 1] ;
}
string(char *s);
void concat(string &amp,string &amp);
string(string &amp;x);
void display();
};
string::string(string &amp;x)
{
length = x.length + strlen(x.str);
str = new char[length + 1];
strcpy(str, x.str);
}
void string:: concat(string &amp;m,string &amp;n)
{
length=m.length+n.length;
delete str;
str=new char[length+1];
strcpy(str,m.str);
strcat(str,n.str);
}
void string:: display()
{
cout&lt;&lt;str&lt;&lt;"\n";
}
string::string(char *s)
{
length = strlen(s);
str = new char[length + 1];
strcpy(str,s);
}
int main()
{
string s1;
string s2(" Well done ");
string s3(" Badly done ");
s2.display();
s1.concat(s2,s3);
s2=s3;
s2.display();
s1.display();
return 0;
}
