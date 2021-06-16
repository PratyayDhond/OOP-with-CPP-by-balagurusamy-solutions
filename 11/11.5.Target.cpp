#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<int> v;
	int m;
	ifstream fin;

	fin.open("source1.txt",ios::ate);
	int n = fin.tellg();
	fin.close();
	fin.open("source1.txt");
	while(n-fin.tellg() >= sizeof(n)){
		fin.read((char*) &m, sizeof(m));
		v.push_back(m);	
	}
	fin.close();
	fin.open("source2.txt",ios::ate);
	 n = fin.tellg();
	fin.close();
	fin.open("source2.txt");
	while(n-fin.tellg() >= sizeof(v[0])){
		fin.read((char*) &m, sizeof(m));
		v.push_back(m);	
	}
	
	
	sort(v.begin(), v.end());
	
	ofstream fout;
	fout.open("Target.txt");
	for(int i=0;i<v.size();i++){
		fout.write((char*) &v[i], sizeof(v[i]));
	}
	
return 0;
}

//For outputting data and for testing code
/*

	
Code for checking output : 

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


*/	