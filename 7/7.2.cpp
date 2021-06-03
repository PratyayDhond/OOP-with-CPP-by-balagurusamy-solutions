#include<iostream>
#include<cmath>
using namespace std;

class Polar{
	float radius;
	float angle;
	float point;
	public:
		Polar(){}
		Polar(float r,float a){
			radius = r;
			angle  = a;
			
		}
		
		friend Polar operator+(Polar p1, Polar p2){
			Polar temp;
			temp.angle = p1.angle + p2.angle;
			temp.radius = p2.radius + p1.radius;
			float x,y;
			x = temp.radius * cos(temp.angle);
			y = temp.radius * sin(temp.angle);
			temp.angle = atan(y/x);
			temp.radius = sqrt(x*x + y*y);	
			return temp;
		}
		
		friend ostream & operator<<(ostream &fetch, Polar P1);
};

ostream & operator <<(ostream &fetch, Polar P1){
			fetch<<"Radius : "<<P1.radius<<endl
				 <<"Angle  : "<<P1.angle<<endl;
			return fetch;	
		}

int main(){
	Polar P1(15,10),P2(30,120),P3;
	P3 = P1 + P2;
	cout<<P3;

return 0;
}
