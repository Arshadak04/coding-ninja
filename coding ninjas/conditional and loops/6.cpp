#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	
	int i=1;
	int sum=0;
	while (i<n){
		if(i%2==0){
			sum=sum+i;}
			else {
				sum=sum+0;
			}
			
		
			i=i+1;}
			
		
		cout<<sum;
	}
