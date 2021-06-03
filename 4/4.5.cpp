#include<iostream>
using namespace std;
	
#define	int largest(int a,int b,int c){
		if(a>b){
			if(a>c){
				return a;
			}
			else{
				return c;
			}		
		}
		else{
			if(b>c){
				return b;
			}
			else{
				return c;
			}
		}
	}

int main(){
	int x,y,z;
	cin>>x>>y>>z;
	cout<<"Largest : "<<largest(x,y,z);

return 0;
}
