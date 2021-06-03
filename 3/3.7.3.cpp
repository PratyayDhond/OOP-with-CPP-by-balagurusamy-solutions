#include<iostream>
#include<cmath>
using namespace std;

float fact(int n){
	while(n>0){
		if(n==1){
			return 1;
		}else{
			return float(n*fact(n-1));
		}
	}
return 0;	
}

int main(){

	int n = 6;
	cout<<"Enter a number : ";
	cin>>n;
	if(n%2 != 0){
		cout<<"You entered an odd no. adding 1 to turn it to even."<<endl;
		n=n+1;
	}
	int x = 4;
	cout<<"Enter a value for x : ";
	cin>>x;
	float cos_x = 1;
	int count =0;

	for(int i=2;i<=n;i=i+2){
		float temp = (pow(x,i)/fact(i));
	//	cout<<pow(x,i)<<endl<<fact(i)<<endl<<temp<<endl<<count<<endl;
		count++;
			if(count%2 == 0){
				cos_x += temp;
			}else{
				cos_x -= temp;
			}
	//	cout<<cos_x<<endl<<endl;;	
	}
	cout<<"cos x : "<<cos_x<<endl;
return 0;
}
