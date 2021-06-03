#include<iostream>
using namespace std;

class bank_acc{
	private:
		char name[10];
		int account_no;
		char Acc_type[10];
		int balance;
	public:
		void initial();		
		void deposit(int a);
		void withdraw(int a);
		void display();
};

void bank_acc :: initial(){
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter Account no : ";
			cin>>account_no;
			cout<<"Enter Account type : ";
			cin>>Acc_type;
			balance = 0;
}

void bank_acc :: deposit(int a){
	balance = balance + a;
}

void bank_acc :: withdraw(int a){
	cout<<"Current balance : "<<balance<<endl;
	if(balance-a<0){
		cout<<"Error insufficient balance"<<endl;
	}else{
		balance = balance -a;
		cout<<"New Balance : "<<balance<<endl;
	}
	
}

void bank_acc :: display(){
	cout<<"Name    : "<<name<<endl
		<<"Balance : "<<balance<<endl;
}




int main(){
	class bank_acc customer1[10];
	int a;
	do{
		int i;
		cout<<"Enter account no : ";
		cin>>i;
		cout<<"1. New Acc."<<endl<<"2. Deposit"<<endl<<"3.Withdraw"<<endl<<"4.Display Balance"<<endl<<"5.Exit"<<endl;
		cin>>a;
		switch(a){
			case 1:
					customer1[i].initial();
					break;
			case 2: 
					
					cout<<"Enter money you want to deposit : ";
					int depo;
					cin>>depo;
					customer1[i].deposit(depo);
					break;
			case 3:
					cout<<"Enter money you want to withdraw : ";
					int money;
					cin>>money;
					customer1[i].withdraw(money);
					break;
			case 4: 
					customer1[i].display();					
					break;
			case 5:
					
					break;
					
		}
		
	}while(a!=5);
	

return 0;
}
