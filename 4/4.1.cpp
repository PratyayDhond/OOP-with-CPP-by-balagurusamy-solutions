#include<iostream>
using namespace std;

int readMatrix(int m,int n){
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}


int main(){
	int m,n;
	cout<<"Enter the size of the matrix (m and n): ";
	cin>>m>>n;
	readMatrix(m,n);

return 0;
}
