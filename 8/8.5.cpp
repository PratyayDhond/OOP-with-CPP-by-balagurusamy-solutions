#include<iostream>
using namespace std;

string a1;
int b1;
class person{
	protected:
	string name="Uninitialized";
	int code = 0;
		void setValues(string a, int b){
		name = a;
		 code = b;
		}
};

class account: virtual public person{
	protected:
	int pay;
		account(int c){
		//	cout<<a<<b;
		//	cout<<"2";
			pay = c;
			
		}
};

class admin: virtual public person{
	protected:
		string experience;
		admin(string c){
			experience = c;
			
		//	cout<<"1";
		}		
};

class master:   public admin,public account{
	public:
		master(string a, int b, int c, string d): account(c),admin(d){setValues(a,b);}	
		void showdata(){
			cout<<"Name : "<<name<<endl
				<<"Code : "<<code<<endl
				<<"Exp. : "<<experience<<endl
				<<"Pay  : "<<pay<<endl;
				
		}
//		void update(string a, int b){
//			
//		}
	};

int main(){
	string name,exp;
	int code,sal;
	cout<<"Enter Name   : ";
	cin>>name;
	cout<<"Enter Code   : ";
	cin>>code;
	cout<<"Enter Salary : ";
	cin>>sal;
	cin.ignore();
	cout<<"Enter Exp.   : ";
	getline(cin,exp);
	master m1(name,code,sal,exp);
	//m1.update(name,code);
	m1.showdata();

return 0;
}
