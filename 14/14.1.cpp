#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v(10);
	int n = v.capacity();
	vector<int> :: iterator it = v.begin();
	
	v.insert(it,0);
	
	v.insert(v.begin()+1,9,1);
	
	it = v.begin() + 9;
	v.insert(it,9); 
	it++;
	
	while(v.size()>10)
		v.pop_back();
	
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";	
	

return 0;
}
