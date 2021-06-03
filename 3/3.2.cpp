#include<iostream>
using namespace std;

void getData(int m,int *v){
	for(int i=0;i<m;i++){
		cout<<"Enter the value at position "<<(i+1)<<" : ";
		cin>>v[i];
	}
}

void showData(int m, int *v){
	cout<<"Inputted values"<<endl;
	for(int i=0;i<m;i++){
	//	cout<<"Value at index "<<i<<" is : "<<v[i]<<" ";
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int *v;
	int m;
	cout<<"Enter size of vector(array) : ";
	cin>>m;
	v = new int[m];
	
	getData(m,v);
	showData(m,v);
	
return 0;
}
