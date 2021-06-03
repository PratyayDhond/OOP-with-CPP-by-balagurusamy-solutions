#include<iostream>
#define MIN_CHARGE 50.00
#define SURCHARGE  0.15
using namespace std;

class electricity{
	private:
			char name1[10],name2[10],name3[10];
			int units=0;
			float amount=0;
	public : 
			void getData();	
			float calc(int);	
			void showData();
				
};

void electricity :: getData(){
	cout<<"Enter full name : ";
	cin>>name1>>name2>>name3;
	cout<<"Enter number of units consumed : ";
	cin>>units;
		amount = calc(units);
}

float electricity :: calc(int units){
	if(units>300){
		amount = 60 +160+((units-300)*0.90) + MIN_CHARGE;
	}
	else if(units>100){
		amount = (100*0.60) + ((units-100)*0.80) + MIN_CHARGE;
		return amount;	
	}
	else if(units<=100){
		amount = units*0.60 + MIN_CHARGE;		
		return amount;	
	}
	if(amount>300)
		amount = amount + (amount*SURCHARGE);
	return amount;	
}

void electricity :: showData(){
	cout<<" Name          : "<<name1<<" "<<name2<<" "<<name3<<endl;
	cout<<"Units consumed : "<<units<<endl;
	cout<<"Amount to pay  :	"<<amount<<endl;
}


int main(){
	class electricity consumer;
	consumer.getData();
	consumer.showData();
	
	
return 0;
}
