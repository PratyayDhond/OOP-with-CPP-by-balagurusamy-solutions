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
		
		void getData(char a[10]= "0",int no = 0){
		if(strcmp(a,"0") ){
			cout<<"Enter phone no : ";
			cin>>phoneNo;
			return;
		}
		strcpy(name,a);
			phoneNo = no;
		}
		
		void show(){
			cout<<"Name   : "<<name<<endl
				<<"Number : "<<phoneNo<<endl
				<<endl;
		}
		
		bool checkName(char a[10]){
			if(strcmp(name,a) == 0){
				return true;
			}
			else 
			return false;
		}
		
		bool checkNum(int a){
			if(phoneNo == a){
				return true;
			}
			return false;
		}
		
};


int main(){
	bool flag;
	int choice;
	dataFile obj1; 
	cout<<"Press 1. to search number.  : "<<endl;
	cout<<"Press 2. to search name     : "<<endl;
	cout<<"Press 3. to update phone no : "<<endl;
	cout<<"Choice : ";
	cin>>choice;
	char name[10];
	int num;
	switch(choice){
		case 1:
				{
				cout<<"Enter name : ";
				cin>>name;
				flag = false;
				ifstream fin("11.3.txt");
				while(fin.eof() == 0){
					fin.read((char*) &obj1,sizeof(obj1));
					if(obj1.checkName(name)){
						cout<<"Data found"<<endl;
						obj1.show();
							flag = true;
							break;
					}
						
				}	
				if(flag == false){
					cout<<"Data not found!";
					}				
				}
				break;
		
		case 2:
				{
				cout<<"Enter number : ";
				cin>>num;
				ifstream fin("11.3.txt");
				while(fin.eof() == 0){
					fin.read((char*) &obj1, sizeof(obj1));
					if(obj1.checkNum(num)){
						cout<<"Data found"<<endl;
						obj1.show();
							flag = true;
							break;
					}	
				}	
				if(flag == false){
					cout<<"Data not found!";
					}				
				}				
				break;
				
		case 3:
				{
				cout<<"Enter name : ";
				cin>>name;
				fstream fin("11.3.txt",ios::in | ios::out | ios::binary);
				while(fin.eof() == 0){
					int count = 0;
					fin.read((char*) &obj1,sizeof(obj1));
					if(obj1.checkName(name)){
						int n = sizeof(obj1);							
						fin.seekp(-n,ios::cur);								// Subtracting the size of object from current position to go back to the byte of object to be updated
						obj1.getData(name);
						fin.write((char*) &obj1,sizeof(obj1))<<flush;
						cout<<"Data updated successfully.";
						flag = true;
							break;
					}
					count++;	
				}	
				if(flag == false){	
					cout<<"Data not found!";
					}				
				}
				break;				
		default:
				break;		
	}
	

return 0;
}