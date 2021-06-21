#include<iostream>
using namespace std;

const int size = 5;

template <class T>
class vector{
	T *v;
	public:
		vector(){
			v = new T[size];
			for(int i = 0;i<size;i++)
				v[i] = 0;			
		}
		
		vector(T a[]){
		
			v = new T[size];
			for(int i=0;i<size;i++)
				v[i] = a[i];
		}
		
		void mul(int);
		void update();
		void show();
};

template <class T>
void vector<T> :: update(){
	int update;
	cout<<"Enter position of element to modify : ";
	cin>>update;
	cout<<"Enter new data : ";
	cin>>v[update-1];
}

template <class T>
void vector<T> :: show(){
	cout<<"Vector : ";
	for(int i=0;i<size;i++){
		cout<<v[i];
		if(i<size-1)
			cout<<",";
	}
	cout<<"\n";
}

template<class T>
void vector<T> :: mul(int a){
	for(int i=0;i<size;i++)
	v[i] = v[i] * a;
}

int main(){
	float arr[size];
	for(int i=0;i<size;i++){
		cout<<"Enter element no. "<<i+1<<" : ";
		cin>>arr[i];
	}
	vector<float> a(arr);
	a.show();
	
	cout<<endl<<"Updating Value : "<<endl;
	a.update();
	a.show();
	
	cout<<endl<<"Multiplying by scalor : "<<endl;
	int x;
	cout<<"Enter value to multiply the vector : ";
	cin>>x;
	a.mul(x);
	a.show();

return 0;
}
