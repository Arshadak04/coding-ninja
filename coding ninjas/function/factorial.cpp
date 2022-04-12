#include<iostream>
using namespace std;


int factorial(int n){                     // function to check prime numbers
	int fact=1;
	for(int x=1;x<=n;x++){
		fact=x*fact;
	}
	return fact;
}
int main(){
	int n;
	cin>>n;
	int x=factorial(n);
	cout<<x;
}
