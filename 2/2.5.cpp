#include<iostream>
using namespace std;
int main(){
// Fahrenheit to Celsius convertion
	float f,c;
	cout<<"Enter temperature in Fahrenheit : ";
	cin>>f;
	// formula : fahr = celsius * (9.0/5.0) + 32.0; Source:www.mathsisfun.com
	c = (f-32)/(9.0/5.0);
	cout<<"Temperature in fahrenheit : "<<f<<endl<<"Temperature in Celsius : "<<c;
	
return 0;
}

/*
Enter temperature in Fahrenheit : 192
Temperature in fahrenheit : 192
Temperature in Celsius : 88.8889
*/

/*
Enter temperature in Fahrenheit : 33.80
Temperature in fahrenheit : 33.8
Temperature in Celsius : 1
*/

/*
Enter temperature in Fahrenheit : 98
Temperature in fahrenheit : 98
Temperature in Celsius : 36.6667
*/