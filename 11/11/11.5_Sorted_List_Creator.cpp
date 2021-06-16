#include<iostream>
#include<fstream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	ofstream fout;
	fout.open("source2.txt");
	for(int i=0;i<n;i++){
		cin>>arr[i];
	fout.write((char*) &arr[i],sizeof(arr[i]));
	}
	fout.close();
return 0;
}


/*
Source 1 : 
n   = 5
arr = 10 20 30 40 50

Source 2 : 
n   = 8
arr = 2 4 8 16 32 64 128 256
*/