#include<iostream>
#include<cmath>
#define e 2.718
using namespace std;

int main(){	
	cout<<"X|";
	for(float i=0.1;i<1.0;i=i+0.1){
		cout.width(11);
		cout.setf(ios::right);
		cout<<i;
		cout<<"     |";
	}
	cout<<endl;
	float x;
	cout<<"__________________________________________________________________________________________________________________________________________________________"<<endl;
	for(int i =0;i<10;i++){
		cout.setf(ios::left);
		cout.width(1);
		cout<<float(i);
		cout<<"|";
		for(float j=0.1;j<1.0;j=j+0.1){
			cout.width(14);
			cout.precision(4);
			cout.setf(ios::right);
			x = float(i + i*j);
			cout<<pow(e,-(x));
			cout<<"  |";
			
		}
		
		cout<<endl;
	}

	
return 0;
}
