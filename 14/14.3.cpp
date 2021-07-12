#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<class T>
void showCount(vector<T> v, T val){
	cout<<"Occurance of "<<val<<" in array : "<<count(v.begin(),v.end(),val)<<endl;
}

int main(){
	vector<int> arr = { 1,3,2,5,4,6,7,1,2,2,3,1,2,3};

	
	showCount(arr,5);
	showCount(arr,1);
	showCount(arr,2);
	showCount(arr,3);
return 0;	
}
