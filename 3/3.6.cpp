#include<iostream>
#include<iomanip>
using namespace std;

int size ;

class data{
	private:
		char name[10];
		int runs,innings,notOut;
		float avg;
	public:
		void getData(){
			cout<<"Enter Name of player    : ";
			cin>>name;
			cout<<"Enter Total Runs scored : ";
			cin>>runs;
			cout<<"Enter No. of innings    : ";
			cin>>innings;
			cout<<"Enter the times player was not out : ";
			cin>>notOut;
			
			avg = calcAvg(runs,innings,notOut);
			//avg = (float(runs)/(float(innings-notOut)));
			fflush(stdin);
		}
		
		float calcAvg(int runs,int innings,int notOut){
			float r = float(runs);
			float i = float(innings);
			float NO = float(notOut);
			avg = (r/(i-NO));
		//	cout<<endl<<avg<<endl;
			return avg;
		}	
		void showData(){
			cout<<"|  "<<setw(10)<<name<<"     |"
				<<"   "<<setw(4)<<runs<<"  |"
				<<"    "<<setw(4)<<innings<<"   |"
				<<"     "<<setw(4)<<notOut<<"        |"
				<<"   "<<fixed<<setprecision(4)<<avg<<"  |"<<endl;
		}	
};

int main(){
	cout<<"Enter the number of players : ";
	cin>>size;
	system("cls");
	class data info[3];
//	info[0].showData();
	for(int i=0;i<size;i++){
		info[i].getData();
	}
	system("cls");
	cout<<" |  Player's name  |  Runs  |  Innings  |  Times Not Out  |  Average  |"<<endl;
	for(int i=0;i<size;i++){
		info[i].showData();
	}	
	
	
return 0;
}
