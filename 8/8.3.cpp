#include<iostream>
#include<iomanip>
using namespace std;

class staff{
	private:	
		int code;
		string name;
	protected:
	staff(int a,string b){
		code = a;
		name = b;
	}
		
	void showdata(){
				cout<<"Code : "<<code<<endl
					<<"Name : "<<name<<endl;
			}	
};

class teacher : public staff{
	string subject;
	string publication;
	public: 
			teacher(int a,string b,string c,string d): staff(a,b){
				subject = c;
				publication = d;
			}
			
			void showData(){
				showdata();
				cout<<"Subject : "<<subject<<endl
					<<"Publication : "<<publication<<endl;	
			}
			
			
};

class officer : public staff{
	char grade;
	public:
		
		officer(int a, string b, char c): staff(a,b){
			grade = c ;
		}
		void showData(){
			showdata();
			cout<<"Grade : "<<grade<<endl;
		}
};

class typist : public staff{
	float speed;			//words per minute
	protected:
		typist(int a,string b,float c): staff(a,b){
			speed = c;
		}
		void showData(){
			showdata();
			cout<<"Typing Speed : "<<fixed<<setprecision(2)<<speed<<" Words per minute"<<endl;
		}	
	
};

class regular: public typist{
	public:
			regular(int a, string b, float c): typist(a,b,c){}
			void showData(){
				typist::showData();
			}
		
};

class casual: public typist{
	float daily_wages;
	public:
		casual(int a,string b,float c,float d): typist(a,b,c){
			daily_wages = d;
		}
		
		void showData(){
			typist::showData();
			cout<<"Daily wages : "<<fixed<<setprecision(2)<<daily_wages<<endl;
		}
};
int main(){
	casual c1(1001,"Pralay",150,300);
	c1.showData();
	cout<<endl;
	regular r1(1002,"Pratyay",200);
	r1.showData();
	cout<<endl;
	officer o1(1003, "Priyanshu", 'A');
	o1.showData();
	cout<<endl;
	teacher t1(1004,"Palak","Maths","Penguin Publications");
	t1.showData();
	
return 0;
}
