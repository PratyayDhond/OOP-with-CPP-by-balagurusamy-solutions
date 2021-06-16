#include<iostream>
#include<fstream>
using namespace std;

int main(){
	string s;
	string s1;
	ifstream fin;
	cout<<"Non Formatted String : "<<endl<<endl;
	fin.open("11.1.txt");
	ofstream fout("11.1.output.txt");
	while(fin.eof() == 0){
	int k=0;
	getline(fin,s);
	for(int i=0;i<s.size();i++){
		if(s[i] == ' '){
			up:
			if(s[i+1] == s[i]){
				i++;
				goto up;
			}else if(s[i] == ' ' && s[i+1] != ' '){
				s1.push_back(' ');	
			}else{
				s1.push_back(s[i]);
			}
		}else{
			s1.push_back(s[i]);
		}		
	}
	cout<<s<<endl;
	fout<<s1;
}	             
	 fin.close();
	 fout.close();
	 
	 cout<<endl<<endl<<"Formatted string : "<<endl<<endl;
	 string s3;
	 fin.open("11.1.output.txt");
	 while(fin.eof() == 0){
	 	getline(fin,s3);
	 	cout<<s3<<endl;;
	 	
	 }
		
	 
return 0;
}
 