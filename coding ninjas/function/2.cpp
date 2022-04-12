#include<iostream>
using namespace std;

bool Isprime(int n){                               //making a function prime
	 int a=2;
	 while(n>a){
	 	
	 	if(n%a==0){
	 		return false;
		 }
		 a++;
	 }
	 return true;
	}
	
	int main(){
		int n;
		cin>>n;
		bool ans=Isprime(n);
		cout<<ans;
	}
