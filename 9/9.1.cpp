#include<iostream>
using namespace std;
class shape{
	protected:
	double a1;
	double a2;
	public:
		void getdata(){
			cin>>a1>>a2;
		}
		virtual void display() = 0;
};

class triangle: public shape{
	public:
		virtual void display(){
			cout<< 1/2.0 * a1 * a2;
		}
};

class rectangle: public shape{
	public:
		virtual void display(){
			cout<< a1*a2;
		}
};

int main(){
	int choice;
	
	do{
	cout<<"Enter 1. to calculate area of triangle "<<endl
		<<"Enter 2. to calculate area of rectangle "<<endl
		<<"Enter 3. to exit"<<endl
		<<"Choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
				{
				triangle obj1;
				cout<<"Enter base and height of triangle : ";
				obj1.getdata();
				cout<<"Area of triangle : ";
				obj1.display();
				cout<<endl;
				break;
				}
		case 2:
				{
				rectangle obj1;
				cout<<"Enter length and breadth of rectangle : ";
				obj1.getdata();
				cout<<"Area of triangle : ";
				obj1.display();
				cout<<endl;
				break;	
				}
		case 3:
				
				cout<<"Now exitting";
				exit(0);
		default:
				cout<<"wrong input.."<<endl;	
	}
	system("pause");
	system("cls");	
	}while(choice!=3);

return 0;
}
