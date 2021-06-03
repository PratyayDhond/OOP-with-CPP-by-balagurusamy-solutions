#include<iostream>
#include<cmath>
using namespace std;

class Rectangle;

class Polar{
	float angle;
	float radius;	
	public:
		void showdata(){
			cout<<"Radius : "<<radius<<endl;
			cout<<"Angle  : "<<angle<<endl;
		}	
		friend Polar convert(Rectangle r1);
};

class Rectangle{
	float angle = 90;
	float length;
	float breadth;
	float diagonal;
	public:
		Rectangle(float l, float b){
			length = l;
			breadth = b;
			diagonal = sqrt(b*b + l*l);
			cout<<endl<<diagonal<<endl;
		}
		friend Polar convert(Rectangle r1);
};


Polar convert(Rectangle r1){
	Polar temp;
	temp.angle = 90;
	temp.radius = r1.diagonal;
	float x,y;
	x = temp.radius * cos(temp.angle);
	y = temp.radius * sin(temp.angle);
	temp.angle = atan(y/x);
	temp.radius = sqrt(x*x + y*y);
	return temp;
}


int main(){
	Rectangle R1(5,5);
	Polar P1;
	P1 = convert(R1);
	P1.showdata();

return 0;
}
