#include<iostream>
using namespace std;

class temp{
	float c;//celsius;
	float f;//fahrenheit;
	
	public:
		void getData(){
			cout<<"Enter the temperature in Fahrenheit : ";
			cin>>f;
			c = getCel(f);
		}
		
		void showData(){
			cout<<"Temperature in Fahrenheit : "<<f<<endl
				<<"Temperature in Celsius    : "<<c;
		}
		
		protected:
		float getCel(float f){
			
			c = (f-32)/(9.0/5.0); 		// forrmula for fahrenheit to celsius
			return c;
		}
		
};

int main(){
	float f = 0;

	class temp a;
	a.getData();
	a.showData();
//	a.getCel(f);		// Can't run this line because it is declared as protected.

return 0;
}

/*
Enter the temperature in Fahrenheit : 100
Temperature in Fahrenheit : 100
Temperature in Celsius    : 37.7778
*/

/*
Enter the temperature in Fahrenheit : 98
Temperature in Fahrenheit : 98
Temperature in Celsius    : 36.6667
*/
