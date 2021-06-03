#include<iostream>
#include<iomanip>
using namespace std;

void getSize(int & m){
	cout<<"Enter the size : ";
	cin>>m;
}

void printPyramid(int n){
	
	for(int i=1;i<=n;i++){
		//	int k = i;
		for(int j=0;j<i;j++){
			cout<<setw(2)<<i<<" ";
		}
		cout<<endl;
	}

}

int main(){
	
	int n;
	getSize(n);
	printPyramid(n);
	
return 0;
}
