#include<iostream>
using namespace std;
class sample{
	private:
		int a;
	public:		
		sample(){}
		sample(int b){
			a = b;			
		}
		
		void showdata(){
			cout<<"no : "<<a<<endl;
		}
		
		friend void swap(sample s1, sample s2);
			
};

void swap(sample s1,sample s2){
		sample temp;
		int sample :: *p = &sample::a;
		temp.*p = s1.*p;
		s1.*p = s2.*p;
		s2.*p = temp.*p; 
}	

int main(){
	sample s1(5),s2(10);
	s1.showdata();
	s2.showdata();
	
	int temp;
	int *ptr1 = (int*)&s1;
	int *ptr2 = (int*)&s2;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
	s1.showdata();
	s2.showdata(); 
return 0;
}
