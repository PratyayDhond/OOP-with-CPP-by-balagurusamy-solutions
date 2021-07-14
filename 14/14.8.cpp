#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<string> Slist;
	
	for(int i=0;i<5;i++){
		string item;
		cout<<"Enter item no. "<<i+1<<" : ";
		cin>>item;
		Slist.push_back(item);
	}
		system("cls");
		int choice;
	do{
		system("cls");
		string item;
		fflush(stdin);
		cout<<"1. To delete a specified item in the list."<<endl
			<<"2. To add an item at a specified location."<<endl
			<<"3. To add an item at the end."<<endl
			<<"4. To print the contents of the vector."<<endl
			<<"5. Exit"<<endl
			<<"Choice : ";
			cin>>choice;
			system("cls");
		switch(choice){
			
			case 1 :
					{
					cout<<"Enter item name to be deleted : ";
					string item;
					cin>>item;	
					vector<string> :: iterator it = Slist.begin();
					for(auto a : Slist){
						if(item == a){
							Slist.erase(it,it+1);
							break;
						}
						it++;
					}
					if(it == Slist.end()){
						cout<<"Item not found"<<endl;
					}else{
						cout<<item<<" removed from the list "<<endl;
					}
					
					}
					break;
			case 2 :
					{
						int pos;
						string item;
						cout<<"Enter position to insert item at : ";
						cin>>pos;
						fflush(stdin);
						cout<<"Enter item you want to insert : ";
						cin>>item;
						pos--;
						vector<string> :: iterator it = Slist.begin();
						Slist.insert(it+pos,item);	
					}
					break;				
			case 3 :
					{
						string item;
						cout<<"Enter item to be inserted at the end : ";
						cin>>item;
						Slist.push_back(item);
					}
					break;				
			case 4 :
					cout<<"-------------------------"<<endl;
					cout<<"List : "<<endl;
					for(auto a : Slist){
						cout<<a<<endl;
					}
					cout<<"-------------------------"<<endl;
					break;				
			case 5 :
					break;			 
		}
		system("pause");
	}while(choice != 5);
	
return 0;
}
