#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	int sum=0;
	cin>>n;
	int a1[10];
	for(int i=0;i<n;i++){
		cin>>a1[i];
		sum=sum+a1[i];
		
	}
	cout<<sum;
}
	/*
	int sum=0;
	
	for(int i=0;i<n;i++){
	sum=sum+a1[i];
	}
	cout<<sum;
	
}
*/
