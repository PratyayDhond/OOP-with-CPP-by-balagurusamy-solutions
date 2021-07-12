#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

class student{
	string first_name;
	int rollNo;
	public:
		void getData(string name, int rNo){
			first_name = name;
			rollNo = rNo;
		}
		
		void display(string name){
			if(name == first_name){
			cout<<first_name<<" ";
			cout<<rollNo<<endl;
			}
		}
		void display(int rNo){
			if(rNo == rollNo){
			cout<<first_name<<" ";
			cout<<rollNo<<endl;
			}
		}
};



void displayData(list<student> std,string name){	
	for(student stdn : std){
		stdn.display(name);
		
	}
}

void displayData(list<student> std, int rollNo){
	for(student stdn : std){
		stdn.display(rollNo);
	}
}

int main(){
student s;
list<student> std(5);
	s.getData("Pratyay",1907011);
	std.push_back(s);
	s.getData("Priyanshu",1907025);
	std.push_back(s);
	s.getData("Manthan",1907029);
	std.push_back(s);
	s.getData("Harsh",1907016);
	std.push_back(s);
	s.getData("Madara",1000001);
	std.push_back(s);
	
	displayData(std,"Madara");
	displayData(std,1907011);
	displayData(std,1907029);
	displayData(std,1907025);
	displayData(std,1907026);
return 0;
}
