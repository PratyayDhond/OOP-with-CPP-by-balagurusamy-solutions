#include<iostream>
#include<map>
using namespace std;

int main(){
	map<string,int> carDetails;
	map<string,int> :: iterator it = carDetails.begin();
	
	int units;
	string modelName;
	
	while(1){
		string unit;
		cout<<"Enter Model Name : ";
		getline(cin,modelName);
		
		if(modelName == "0")
			break;
		try{
		cout<<"Enter Units sold : ";
		cin>>unit;
		units = stoi(unit);
		}catch(...){
			cout<<"Invalid Input"<<endl;
			system("pause");
			system("cls");
			cout<<"Model Name : "<<modelName<<endl;
			cout<<"Enter Units sold : ";
			cin>>units;
		}
		fflush(stdin);
		
		carDetails.insert(pair<string,int> (modelName,units));
		cout<<endl;
	}
	
	system("cls");
	
	int cost;
	cout<<"Enter Model Name to search : ";
	cin>>modelName;
	cout<<"Enter unit cost : ";
	cin>>cost;
	
	for(auto a : carDetails){
		if(a.first == modelName){
			cout<<"Model name : "<<a.first<<endl<<"Price :  "<<(long long)a.second*(long long)cost;
		}
	}
	
	
return 0;
}
