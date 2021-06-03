#include<iostream>
#include<iomanip>
using namespace std;
class list{
	string item_name;
	string item_code;
	float  item_price;
	public:
		list(string name,string code,float price){
			item_code = code;
			item_name = name;
			item_price = price;
		}
		
		void display(){
			cout.width(4);
			cout.fill('-');
			cout.setf(ios::right);
			cout.width(12);
			cout<<item_name;
			
			cout.width(4);
			cout.fill('-');
			cout<<"|";
			cout.setf(ios::right);
			cout.width(10);
			cout<<item_code;
			
			cout.width(4);
			cout.fill('-');
			cout<<"|";
			cout.width(12);
			cout.fill('-');
			cout.setf(ios::showpoint);
			cout<<fixed<<setprecision(2)<<item_price;
			cout.width(4);
			cout.fill('-');
			cout<<"|"<<endl;
			cout.fill(' ');
			
		}
};

void println(){
	cout<<"----------------------------------------------"<<endl;
}
int main(){
	list l1("Pen","ZXCV143",10.5);
	list l2("Notebook","ZXCV147",45);
	list l3("Eraser","ZXCV153",3.50);
	list l4("Pencil","ZXCV142",5);
	list l5("Geometry Box","ZXCX143",125);
	
	println();
	cout.setf(ios::right);
	cout.width(13);
	cout<<"Name";
	cout.setf(ios::left);
	cout.width(13);
	cout<<"Code";
	cout.setf(ios::right);
	cout.width(17);
	cout<<"Price";
	cout<<"  |"<<endl;
	println();
	l1.display();
	l2.display();
	l3.display();
	l4.display();
	l5.display();
	println();	
return 0;
}
