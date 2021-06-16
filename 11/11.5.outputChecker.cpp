#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
	int m;
	vector <int> v;
		ifstream fin;
	fin.open("target.txt",ios::ate);
	int n = fin.tellg();
	fin.close();
	fin.open("Target.txt");
	while(n-fin.tellg() >= sizeof(n)){
		fin.read((char*) &m, sizeof(m));
		v.push_back(m);	
	}
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";

return 0;
}
