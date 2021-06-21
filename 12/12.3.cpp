#include<iostream>
using namespace std;

template<class T>
bool linearSearch(T arr[], T key,int n){
	for(int i =0; i<n;i++)
		if(arr[i] == key)
			return true;
	return false;
}

int main(){
	int arr[] = {5,4,6,8,19,35,21};
	int key = 35;									//Edit key here to test the program
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<(linearSearch(arr,key,n)?"Element found":"Element not found");

return 0;
}
