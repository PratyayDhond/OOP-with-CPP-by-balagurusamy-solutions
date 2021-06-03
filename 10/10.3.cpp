#include<iostream>
#include<iomanip>
using namespace std;

 int main(){
	
	char c;
	string data;	
		cout<<"Press 0 to exit"<<endl;
		cout<<"Enter data : ";
	do{
		c = getchar();
		if(c != '0'){
			data += c;
		}
	}
	while(c != '0');
	system("cls");
	
	int white_space;
	int letters=0;
	int words=0;
	int sentences=0;
	for(int i=0;i<data.size();i++){
		letters++;
		if(data[i] == ' '){
			words++;
		}
		if(data[i] == '\n'){
			sentences++;
		}
	}
	letters -= words;
	words++;
	cout.width(15);
	cout.setf(ios::left);
	cout<<"No of characters : ";
	cout.width(15);
	cout<<setiosflags(ios::right);
	cout<<letters<<endl;
	cout.width(15);
	cout<<setiosflags(ios::left);
	cout<<"No of words      : ";
	cout.width(15);
	cout<<setiosflags(ios::right);
	cout<<words<<endl;
	cout.width(15);
	cout<<setiosflags(ios::left);
	cout<<"No of sentences  : ";
	cout.width(15);
	cout<<setiosflags(ios::right);
	cout<<sentences<<endl;
	
//	cout<<data;	
	

return 0;
}
