#include<iostream>
using namespace std;

int main(){
	int *a;
	int b = 50;
	a = reinterpret_cast<int*>(b);	
return 0;
}
