#include<iostream>
using namespace std;

int no_of_digit(int n){
	if(n==0){
		return 0;
	}
   return no_of_digit(n/10) +1;
}

int main (){
	int n;
	cin>>n;
     cout<<no_of_digit(n);
}
