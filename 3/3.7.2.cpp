#include<iostream>
#include<cmath>
using namespace std;

int main(){
float sum = 0;
int n;
cout<<"Enter no. : ";
cin>>n;

for(int i=1;i<n;i++){
	float temp = pow(1/float(i),2);
	sum += temp;
	cout<<temp<<endl;
}

cout<<"Sum : "<<sum<<endl;

return 0;
}
