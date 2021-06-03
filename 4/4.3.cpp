#include<iostream>
using namespace std;

void matrix(int m=2, int n=2){
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	cout<<"Array you inputted"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<< " ";
		}
		cout<<endl;
	}
	
}

int main(){
	matrix();
	return 0;
}