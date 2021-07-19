/*
Input : 
		 6
		 India
		 Australia
		 China
		 Bangladesh
		 America
		 France
Output :		
		 America
		 Australia
		 Bangladesh
		 China
		 France
		 India
		
*/
#include<iostream>
#include<string>
using namespace std;
void sort(string country[],int n){
	for(int i = 1;i<n;i++){
	string str = country[i];
		int j = i-1;
			while(j>=0 && str < country[j]){
				country[j+1] = country[j];
				j--;
			}
			country[j+1] = str;
		}
	
	
}	

int main(){

	int n;
	cin>>n;
	string country[n];
	int T = n;
	while(T-->0){
		cin>>country[T];
	}
	
	sort(country,n);
	
	for(auto a : country){
		cout<<a<<endl;
	}	

return 0;
}
