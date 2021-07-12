#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main(){
	
//	int arr[5] = {2,4,6,8,10};
//	list<int> li= {1,3,5,7,9};
	
	int arr[5] = {213,443,653,787,113};
	list<int> li= {124,334,552,72,92};
	vector<int> v(10);
	
	merge(&arr[0],&arr[5],li.begin(),li.end(),v.begin());
	
	sort(v.begin(),v.end());	
	
	for(int i = 0;i<v.size();i++)
		cout<<v[i]<<" ";
	
return 0;
}
