#include<iostream>
using namespace std;

     int plus_a_b(int a,int b){                               //making a function plus
	return a+b;
	 }
	 
	 int minus_a_b(int a,int b){                               //making a function minus
	return a-b;
	 }
	 
	 int mul_a_b(int a,int b){                               //making a function multiply
	return a*b;
	 }
	 
	 int div_a_b(int a,int b){                               //making a function divide
	return a/b;
	 }
	 

	 int main(){
	 cout<<"PRESS 1 FOR PLUS "<<endl;	 
	 cout<<"PRESS 2 FOR MINUS "<<endl;
	 cout<<"PRESS 3 FOR MULTIPLY "<<endl;
	 cout<<"PRESS 4 FOR DIVIDE "<<endl;
	 
	 int x;
	 cin>>x;
	 
	 
	 cout<<"enter two number for operation "<<endl;
	 int a,b;
	 cin>>a>>b;
	 int ans;
	 if (x==1){
	 	ans=plus_a_b(a,b);
	 	cout<<ans<<endl;
	 	
	 }
	 
	else if (x==2){
	 	 ans=minus_a_b(a,b);
	 	cout<<ans<<endl;
	 	
	 }
	 
	else if (x==3){
	 	 ans=mul_a_b(a,b);
	 	cout<<ans<<endl;
	 	
	 }
	 
	else if (x==4){
	 	 ans=div_a_b(a,b);
	 	cout<<ans<<endl;
	 	
	 }
	 else {
	 	cout<<" SORRY WE DID NOT HAVE THESE OPERATION"<<endl;
	 }
	 
	 }
	 

