#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a1[10];
	for(int i=0;i<n;i++){
		cin>>a1[i];
		
	}
	int gretest;
	gretest=INT_MIN;
	for(int i=0;i<n;i++){
	if(a1[i]>gretest){
		gretest=a1[i];
		}
	}
	cout<<gretest;
	
}
