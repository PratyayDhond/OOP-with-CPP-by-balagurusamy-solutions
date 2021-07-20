#include<iostream>

namespace Constants{
	
	const int a = 50;
	const int b = 40;
	
}

int main(){
	
	using namespace Constants;
	int c = a + b;
	std::cout<<c;
return 0;
}
