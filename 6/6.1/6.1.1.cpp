#include<iostream>
#include<string>
using namespace std;

class bank_acc{
	private:
		char name[30];
		int account_no;
		char Acc_type[10];
		int balance;
	public:
		void initial();		
		void deposit(int a);
		void withdraw(int a);
		void display();
		bank_acc();
};

bank_acc :: bank_acc(){
	account_no = 0;
	balance = 0;
	strcpy(Acc_type,"Savings");
	strcpy(name,"User1");
}
void bank_acc :: initial(){
			cin.ignore();
			cout<<"Enter name : ";
			cin.getline(name,sizeof(name));
			cout<<"Enter Account no : ";
			cin>>account_no;
		//cout<<"Enter Account type : ";
		//	cin>>Acc_type;
		//	balance = 0;
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
	cout<<"Name         : "<<name<<endl
		<<"account no   : "<<account_no<<endl
		<<"Account type : "<<Acc_type<<endl
		<<"Balance      : "<<balance<<endl;
}




int main(){
	class bank_acc customer1;
	int a;
	do{
		
		cout<<"1. New Acc."<<endl<<"2. Deposit"<<endl<<"3.Withdraw"<<endl<<"4.Display Balance"<<endl<<"5.Exit"<<endl;
		cin>>a;
		switch(a){
			case 1:
					customer1.initial();
					break;
			case 2: 
					cout<<"Enter money you want to deposit : ";
					int depo;
					cin>>depo;
					customer1.deposit(depo);
					break;
			case 3:
					cout<<"Enter money you want to withdraw : ";
					int money;
					cin>>money;
					customer1.withdraw(money);
					break;
			case 4: 
					customer1.display();
					system("pause");
					system("cls");					
					break;
			case 5:
					
					break;
					
		}
		
	}while(a!=5);
	

return 0;
}
