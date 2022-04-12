#include<iostream>
using namespace std;
int main (){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	
	int i=2;
	bool divided= false;
	while(i<n){
		if(n % i == 0){
		cout<<"not prime"<<endl;
		 divided= true;
		 break;
		}
		
		i=i+1;
	}
	if(!divided){
		cout<<"prime no"<<endl;
	}
}
