/*
Input  : 123456789
Output :
			        1
			      2 3 2
			    3 4 5 4 3
			  4 5 6 7 6 5 4
		 	5 6 7 8 9 8 7 6 5
		 	
Input  : abcdefghijklmnopqrstuvwxyz		 	
Output :
                                  a
                                b c b
                              c d e d c
                            d e f g f e d
                          e f g h i h g f e
                        f g h i j k j i h g f
                      g h i j k l m l k j i h g
                    h i j k l m n o n m l k j i h
                  i j k l m n o p q p o n m l k j i
                j k l m n o p q r s r q p o n m l k j
              k l m n o p q r s t u t s r q p o n m l k
            l m n o p q r s t u v w v u t s r q p o n m l
          m n o p q r s t u v w x y x w v u t s r q p o n m
        n o p q r s t u v w x y z   z y x w v u t s r q p o n
 
*/

#include<iostream>
#include<string>
using namespace std;

int main(){

string str;
cin>>str;
int n = str.size()/2;

for(int i = 0;i<=n;i++){
	for(int j = 0;j<n-i;j++){
		cout<<"  ";
	}
	
	for(int j = i;j<i+i;j++){
		cout<<str[j]<<" ";
	}
	for(int j = i+i;j>i-1;j--){
		cout<<str[j]<<" ";
	}
	cout<<endl;
}

return 0;
}
