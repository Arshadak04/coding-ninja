#include<iostream>                              //here are showing a number is prime or not
using namespace std;                            //we take a new variable which start from 2 and go upto n to divide  n
int main (){                                    // if it divide it is non prime , and it it is not divisible upto n then it is prime
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	
	int i=2;
	bool divided= false;                       // here we taken a bool for showing at that time no number is divided n
	while(i<n){
		if(n % i == 0){
		cout<<"not prime"<<endl;
		divided= true;                         // here it is showing that it became true that some number x divide n 
		}
		
		i=i+1;
	}
	if(!divided){                              // if upper condition not followed than these will work and print the is prime
		cout<<"prime no"<<endl;
	}
}
