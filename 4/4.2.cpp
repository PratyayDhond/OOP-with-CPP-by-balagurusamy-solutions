#include<iostream>
using namespace std;

void matrix(int m, int n){
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
	int m,n;
	cin>>m>>n;
	matrix(m,n);
	return 0;
}