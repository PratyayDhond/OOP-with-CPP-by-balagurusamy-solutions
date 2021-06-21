#include<iostream>
using namespace std;

template<class T>
T min(T arr[],int n){
	T m = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i] < m)
			m = arr[i];
	}
	return m;
}

int main(){
	int arr[] = {5,1,12,6,18,10};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array : ";
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Minimum element in array : "<<min(arr,n)<<endl;
	

return 0;
}
