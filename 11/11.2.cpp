#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string line;
	string name;
	string number;
	int no;
	
	cout.setf(ios::left);
		cout.width(10);
		cout<<"Name";
		
		cout.setf(ios::right);
		cout.width(11);
		cout<<"Number";
		cout<<"\n";	
		cout.unsetf(ios::right);
	
	ifstream fin;
	fin.open("11.2.txt");
	int i;
	while(fin.eof() == 0){
		
		fin>>name>>no;
		
		cout.setf(ios::left);
		cout.width(10);
		cout<<name;
		
		cout.setf(ios::right);
		cout.width(10);
		cout<<no;
		cout<<"\n";	
		cout.unsetf(ios::right);
	}
	

return 0;
}
