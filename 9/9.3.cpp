#include<iostream>
using namespace std;
class shape{
	protected:
	double a1;
	double a2;
	public:
		void getdata(int a, int b=0){
			a1 = a;
			a2 = b;
		}
		virtual void display() = 0;
};

class triangle: public shape{
	public:
		void display(){
			cout<< 1/2.0 * a1 * a2;
		}
};

class rectangle: public shape{
	public:
		void display(){
			cout<< a1*a2;
		}
};

class circle : public shape{
	public:
		void display(){
			cout<<3.14*a1*a1;
		}
};

int main(){
	int choice;
	
	do{
	cout<<"Enter 1. to calculate area of triangle "<<endl
		<<"Enter 2. to calculate area of rectangle "<<endl
		<<"Enter 3. to calculate area of circle "<<endl
		<<"Enter 4. to exit"<<endl
		<<"Choice : ";
	cin>>choice;
	
	switch(choice){
		case 1:
				{
				triangle obj1;
				cout<<"Enter base and height of triangle : ";
				int b,h;
				cin>>b>>h;
				obj1.getdata(b,h);
				cout<<"Area of triangle : ";
				obj1.display();
				cout<<endl;
				break;
				}
		case 2:
				{
				rectangle obj1;
				cout<<"Enter length and breadth of rectangle : ";
				int l,b;
				cin>>l>>b;
				obj1.getdata(l,b);
				cout<<"Area of triangle : ";
				obj1.display();
				cout<<endl;
				break;	
				}
		case 3:
				{
				circle obj1;
				cout<<"Enter radius of circle : ";
				int r;
				cin>>r;
				obj1.getdata(r);
				cout<<"Area of circle : ";
				obj1.display();
				cout<<endl;	
				}
				break;		
		case 4:
				
				cout<<"Now exitting";
				exit(0);
		default:
				cout<<"wrong input.."<<endl;	
	}
	system("pause");
	system("cls");	
	}while(choice!=4);

return 0;
}
