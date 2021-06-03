#include<iostream>
#include<time.h>
using namespace std;
int main(){
	Restart:
 int candidate[5]={0},sb=0;	// sb = spoilt ballot;
 int vote;
 int n;
 int count = 0;
 cout<<"Enter the number of voters : ";
 cin>>n;
 for(int i=0;i<n;i++){
 
 	cout<<"Enter the candidate no. (1-5 and 0 for NOTA) you want to vote : ";
	 cin>>vote;
 	switch(vote){
 		case 1 : 
 				candidate[0]++;
				break;
 		case 2 : 
 				candidate[1]++;
				break;
		case 3 : 
 				candidate[2]++;
				break;
		case 4 : 
 				candidate[3]++;
				break;
		case 5 : 
 				candidate[4]++;
				break;
		default:
				sb++;
				break;			 		 		 		 		
	 }
	cout<<endl;
 	
 }
  
  	int cand[5];
  	for(int i=0;i<5;i++){
  		cand[i] = candidate[i];
	  }
	 
	 for(int i=1;i<5;i++){
	 		
	 	 int key = cand[i];	
		 int j= i-1;
	 		while(j>=0 && cand[j]>key){
	 			int temp = cand[j];
	 			cand[j] = cand[j+1];
	 			cand[j+1] = temp;
	 			j--;
			 }
	 }
	  	
	  cout<<"Sorted votes : "<<endl;	 
	for(int i=0;i<5;i++){
 		cout<<"Votes for candidate "<<i+1<<" are : "<<cand[i]<<endl;
	 }

	for(int i = 0;i<5;i++){
		if(candidate[i] == cand[4]){
		//	cout<<"The winner of the election is candidate"<<i+1<<" with "<<cand[4]<<" votes";
			count++;
		}
		}
		if(count == 1){
			goto next;
		}
		if(count > 1){
			cout<<"There is a tie!"<<endl;
			cout<<"The election should be reheld between candidates :";
			
			for(int i = 0;i<5;i++){
		if(candidate[i] == cand[4]){
			cout<<""<<i+1<<",";
		}		
		cout<<".";
		}
		int t = time(NULL)+3;
		while(t != time(NULL)){
		}
		system("cls");
		goto Restart;
	
		}
		next:
	for(int i = 0;i<5;i++){
		if(candidate[i] == cand[4]){
			cout<<"The winner of the election is candidate "<<i+1<<" with "<<cand[4]<<" votes";
			cout<<endl<<"No of ballot votes : "<<sb;
			return 0;
		}
	}
	
	
return 0;
}
