#include<iostream>
using namespace std;

class account{
	protected:	
		string name;
		int account_no;
		string acc_type;
		float balance = 0;
		static int count;
	public:
		
		void getData(string);
		void Deposit();
		void Display();
		
};

class cur_acct: public account{
		float min = 500;
		int fine = 150;
	public:
			void withdraw();
			void misc();
			float bal();
			void checkBal();
};

class sav_acct: public account{
	
	public:
			void withdraw();
			void updatedBalance();	
			float bal();
};

int account :: count;

void account :: Deposit(){
					float depo_money;
					cout<<"Enter money you want to deposit : ";
					cin>>depo_money;
					balance += depo_money;
					cout<<depo_money<<" Deposited successfully"<<endl;
				}
					

void account :: getData(string a){
					name = a;
					account_no = ++count;
					account_no += 100;
}

void account :: Display(){
					cout<<endl<<"Name : "<<name<<endl
						<<"Account no. :"<<account_no<<endl;
					cout<<"Account balance : "<<balance<<endl;
}



void sav_acct :: withdraw(){
					int money;
					cout<<"Enter amount to withdraw : ";
					cin>>money;
					
					if(money<=balance){
						balance -= money;
						cout<<money<<" withdrawn successfully! Remaining balance : "<<balance;

					}else{
						cout<<"Error! insufficient balance!";
					}		

} 

void cur_acct :: withdraw(){
					int money;
					int choice;
					cout<<"Enter amount to withdraw : ";
					cin>>money;
					if(money)
					if(money<= (balance-min)){
						balance -= money;
						cout<<money<<" withdrawn successfully!"<<endl<<"Remaining balance : "<<balance<<endl;
						}else if(money>=(balance - min) && money <= balance-fine){
							do{
								cout<<"If you withdraw balance will be less than min, resulting in a fine of rs "<<fine<<"."
									<<endl<<"Do you wish to proceed?"<<endl<<"Press 1 to withdraw money"<<endl<<"Press 2 to view balance"
									<<endl<<"Press 3 to renter money"<<endl<<"Press 4 to exit"<<endl<<"Choice : ";
								cin>>choice;
								switch(choice){
								
									case 1:
											balance -= money;
											balance -= fine;
											cout<<"Rs. "<<money<<" Withdrawn successfully"<<endl
												<<"Rs. "<<fine <<" Deducted as fine"
												<<"Remaining Balance : "<<balance<<endl;
											choice = 4;												// for exiting the loop
											break;
											
									case 2:
											cout<<"Account Balance : "<<balance
												<<endl<<"Witdrawable amount : "<<(balance-min)<<endl;
											break;
									case 3: 
											cout<<"Account balance : "<<balance
												<<endl<<"Witdrawable amount : "<<(balance-min)<<endl;
											cout<<"Enter amount of money you want to withdraw : ";
											cin>>money;
											if(money>balance-min){
												cout<<"Insufficient Balance!"<<endl;
												choice = 4;											// for exiting the loop
											}else{
													balance -= money;
													balance -= fine;
													cout<<"Rs. "<<money<<" Withdrawn successfully"<<endl
														<<"Remaining Balance : "<<balance<<endl;
																									// for exiting the loop
											}
											choice = 4;
											break;
									case 4: 
											break;
									default:
											cout<<"Enter one of the given choices : "<<endl;
											break;										
								}		
							}while(choice!= 4);
					}else{
						cout<<"Error! insufficient balance!"<<endl;
						}		
}

void cur_acct :: misc(){
	cout<<"Minimum Balance required : "<<min<<endl
		<<"Your Account Balance     : "<<balance<<endl
		<<"Penaulty amount          : "<<fine<<endl;
} 

void sav_acct :: updatedBalance(){
	balance += (balance * 0.08);
}

float sav_acct :: bal(){
	return balance;
}

float cur_acct :: bal(){
	return balance;
}

void cur_acct :: checkBal(){
	if(balance<min){
		balance -= fine;
	}
	cout<<"Rs. "<<fine<<" Deducted as fine for having less than minimum balance"<<endl;
}

cur_acct obj1[10];
sav_acct obj2[10];
int i=0;

int main(){
		
		string name;
		int choice;
		cout<<"Welcome to Lightning Bank "<<endl
			<<"Enter Your Name : ";
			getline(cin,name);
			system("pause");
			system("cls");
		cout<<"What type of account do you want to create?"<<endl
			<<"Press 1 for Current Account (A minimum balance of Rs. 500 must be maintained)"<<endl
			<<"Press 2 for Savings Account "<<endl
			<<"Choice : ";
			cin>>(choice);
			int exit;
			do{
				switch(choice){
				
				case 1:
					
						cout<<"Account Created Successfully"<<endl<<endl;
						obj1[i].getData(name);
						obj1[i].Deposit();
						obj1[i].checkBal();
						cout<<endl;
						system("pause");
						system("cls");
						cout<<"Account Details"<<endl;
						obj1[i].Display();
					//	obj1[i].misc();						
						i++;
						exit = 1;
						break;
				case 2:
						cout<<"Account Created Successfully"<<endl;
						obj2[i].getData(name);
						obj2[i].Deposit();
						obj2[i].updatedBalance();
						system("pause");
						system("cls");
						cout<<"Account Details"<<endl<<"With 8% interest"<<endl;
						obj2[i].Display();
						i++;
						exit = 1;
						break;
				default:
						exit = 0;
						break;		
			}		
			}while(exit != 1);
			system("pause");
			system("cls");
//			cout<<endl<<endl<<i<<endl<<endl;
			cout<<"How can we help you : "<<endl
				<<"Press 1 to withdraw money"<<endl
				<<"Press 2 to deposit money"<<endl
				<<"Press 3 to Create new account"<<endl
				<<"Press 4 to Display Details "<<endl
				<<"Press 5 to Exit"<<endl;
			UP:	
				cout<<"Choice : ";
			cin>>choice;
				system("pause");
				system("cls");
			do{
				switch(choice){
					case 1:
							
								int choice2;
								int acc_no;
								cout<<"Enter your account type"<<endl
								<<"Press 1 for current account"<<endl
								<<"Press 2 for savings account"<<endl
								<<"Choice : ";
								cin>>choice2;
							
								switch(choice2){
									case 1:
											system("pause");
											system("cls");
											cout<<"Enter Account no. : ";
											cin>>acc_no;
											acc_no -= 101;
	//										cout<<endl<<endl<<acc_no<<endl<<endl;
											obj1[acc_no].withdraw();
											
											break;
									case 2:
											system("pause");
											system("cls");	
											cout<<"Enter Account no. : ";
											cin>>acc_no;
											acc_no -= 101;
											obj2[acc_no].withdraw();
											
											break;
									default:
										 cout<<"Error! wrong input!"<<endl;
										 break;	
								}
								
							system("pause");
							system("cls");
							choice =  -1 ;
							break;
					case 2:
							{
								int choice2;
								int acc_no;
								cout<<"Enter your account type "<<endl
								<<"Press 1 for current account"<<endl
								<<"Press 2 for savings account"<<endl
								<<"Choice : ";
								cin>>choice2;
								
								switch(choice2){
									case 1:
											cout<<"Enter Account no. : ";
											cin>>acc_no;
											acc_no -= 101;
	//										cout<<endl<<endl<<acc_no<<endl<<endl;
											obj1[acc_no].Deposit();
											cout<<"Updated Balance : "<<obj1[acc_no].bal()<<endl;
											system("pause");
											break;
									case 2:
											cout<<"Enter Account no. : ";
											cin>>acc_no;
											acc_no -= 101;
											obj2[acc_no].Deposit();
											cout<<"Updated Balance : "<<obj2[acc_no].bal()<<endl;
											system("pause");
											break;
									
									default:
										 cout<<"Error! wrong input!"<<endl;
										 break;	
									}
							}
							choice =  -1 ;
							system("pause");
							break;
					case 3:
							
							system("cls");
							cin.ignore();
							main();
							choice = 5;
							break;
					case 4:
							{
								int choice2;
								int acc_no;
								cout<<"Enter your account type "<<endl
								<<"Press 1 for current account"<<endl
								<<"Press 2 for savings account"<<endl
								<<"Choice : ";
								cin>>choice2;
									cout<<"Enter Account no. : ";
											cin>>acc_no;
											acc_no -= 101;
								switch(choice2){
									case 1:
										
											
	//										cout<<endl<<endl<<acc_no<<endl<<endl;
											obj1[acc_no].Display();
											system("pause");
											break;
									case 2:
										
											obj2[acc_no].Display();
											system("pause");
											break;
										
									default:
										 cout<<"Error! wrong input!"<<endl;
										 system("pause");
										 break;	
									}
							}
							system("cls");
							choice =  -1 ;	
							break;
					
					case 5:
							cout<<"Exiting Program....."<<endl;	
							break;
					default :
							cout<<"Error Input!";
							system("pause");
							system("cls");
							choice = -1;
							break; 						
							
					case -1:
							system("cls");
								cout<<"How can we help you : "<<endl
									<<"Press 1 to withdraw money"<<endl
									<<"Press 2 to deposit money"<<endl
									<<"Press 3 to Create new account"<<endl
									<<"Press 4 to Display Details "<<endl
									<<"Press 5 to Exit"<<endl;
									goto UP;
				}
			}while(choice != 5);	
	
return 0;
}
