#include<iostream>
#include<fstream>
using namespace std;

class dataFile{
	char name[10];
	int phoneNo;
	public:
		dataFile(){
		
			phoneNo = 0;
		} 
		
		dataFile(char a[10],int no){
			strcpy(name,a);
			phoneNo = no;
		}
		
		void getData(char a[10],int no){
		strcpy(name,a);
			phoneNo = no;
		}
		
		void show(){
			cout<<"Name   : "<<name<<endl
				<<"Number : "<<phoneNo<<endl
				<<endl;
		}
};

int main(){
	int no;
	char name[10];
	dataFile p;
	ifstream fin("11.2.txt");
	ofstream fout("11.3.txt");
	while(fin){
		fin>>name>>no;
	//	cout<<name<<endl<<no<<endl;
		
		p.getData(name,no);
		
		fout.write((char*) &p, sizeof(p));

	}
	fin.close();
	fout.close();
	
	
	fin.open("11.3.txt",ios::ate);
		int n = fin.tellg();
		fin.seekg(0,ios::beg);	
		while(n-fin.tellg()-1 >= sizeof(p)){
		fin.read((char*) &p,sizeof(p));
		p.show();
		}
return 0;
}
