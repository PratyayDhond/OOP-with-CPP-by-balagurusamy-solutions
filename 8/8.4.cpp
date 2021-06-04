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

class education{
	string highest_academic_qualification;
	string highest_professional_qualification;
	public:
		education(string a, string b){
			highest_academic_qualification = a;
			highest_professional_qualification = b;
		}
		
		void showdata(){
			cout<<"Academic Qualification : "<<highest_academic_qualification<<endl
				<<"Professional Qualification : "<<highest_professional_qualification<<endl;
		}
};


class teacher : public staff, public education{
	string subject;
	string publication;
	public: 
			teacher(int a,string b,string c,string d,string e,string f): staff(a,b) , education(e,f){
				subject = c;
				publication = d;
			}
			
			void showData(){
				staff::showdata();
				education::showdata();
				cout<<"Subject : "<<subject<<endl
					<<"Publication : "<<publication<<endl;	
			}
			
			
};

class officer : public staff,public education{
	char grade;
	public:
		
		officer(int a, string b, char c,string d,string e): staff(a,b) , education(d,e){
			grade = c ;
		}
		void showData(){
			staff::showdata();
			education::showdata();
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
	officer o1(1003, "Priyanshu", 'A',"B.E in Information Technology","Worked at Amazon for 1 year");
	o1.showData();
	cout<<endl;
	teacher t1(1004,"Palak","Maths","Penguin Publications","B.A in teaching","Worked at IIT home for 30 days");
	t1.showData();
	
return 0;
}
