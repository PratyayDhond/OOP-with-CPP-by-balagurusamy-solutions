#include<iostream>
#include<iomanip>
using namespace std;

class DB;

class DM{
	private:
		float m;
		float cm;
	public:
		void getData();
		void display();
		friend DM add(DM a,DB b);
};

class DB{
	private:	
		float ft;
		float in;
	public:
		void getData();
		void display();
		friend DM add(DM a, DB b);		
};

void DM :: getData(){
	cout<<"Enter metres      : ";
	cin>>m;
	cout<<"Enter centimetres : ";
	cin>>cm;
}

void DB :: getData(){
	cout<<"Enter feet        : ";
	cin>>ft;
	cout<<"Enter inches      : ";
	cin>>in;
}

void DM :: display(){
	cout<<"input : "<<endl
		<<m<<"m "<<cm<<"cm";
}

void DB :: display(){
	cout<<"input : "<<endl
		<<ft<<"ft "<<fixed<<setprecision(2)<<in<<"in"<<endl;
}

DM add(DM a,DB b){
	DM temp;
	float m,cm;
	int inches = b.ft * 12 + b.in;
	cm = float(inches) * 2.54;
	if(cm>=100){
		m = int(cm)/100;
		cm = int(cm)%100;
	}
	temp.m = m + a.m;
	temp.cm = cm + a.cm;
		if(temp.cm>=100){
		temp.m =temp.m + int(temp.cm)/100;
		temp.cm =int(temp.cm)%100;
	}
	return temp;
}

int main(){
	DM D1,D3;
	DB D2;
	D1.getData();
	D2.getData();
	D3 = add(D1,D2);
	D3.display();
	
return 0;
}
