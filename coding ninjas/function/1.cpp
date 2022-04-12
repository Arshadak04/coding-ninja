#include<iostream>
using namespace std;

int factorial(int n){                               //making a function factorial
	int ans=1;
	int a=1;                                       
	while (n>=a){
		ans=ans*a;
		a++;
	}
	return ans;
}

int main(){
	int n,r;
	cin>>n>>r;
	int fact_n=factorial(n);                                  // return ans stored here
	int fact_r=factorial(r);                                  // return ans stored here
	int fact_n_r=factorial(n-r);                              // return ans stored here
	cout<<fact_n/(fact_r*fact_n_r)<<endl;
}
	
	/*
	                                                              //genral code of factorial without function
	int fact_n=1;
	int a=1;
	while(a<=n){                                           
		fact_n=fact_n*a;
		a++;
	}
	
	int fact_r=1;
	a=1;
	while(a<=r){
		fact_r=fact_r*a;
		a++;
	}
	
	int fact_n_r=1;
	a=1;
	while(a<=n-r){
		fact_n_r=fact_n_r*a;
		a++;
	}
	
	cout<<fact_n/(fact_r*fact_n_r)<<endl;
	*/

