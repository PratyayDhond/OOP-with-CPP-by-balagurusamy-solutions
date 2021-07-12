#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void isFound(vector<int> arr,int val){
	vector<int> :: iterator it;
	it = find(arr.begin(),arr.end(),val);
	if(it!= arr.end()){
		cout<<"Value found at index : "<<it-arr.begin()<<"\n";
	}else{
		cout<<"Value is not present in the array\n";
	}	
}

int main(){
 vector<int> arr;
 for(int i = 1;i<=25;i++){
 	arr.push_back(i*2);
 }
 isFound(arr,34);
 isFound(arr,42);
 isFound(arr,50);
 isFound(arr,33);
 
	
return 0;
}
