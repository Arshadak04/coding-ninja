#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int d=0;
	
	while(i<=n){
		int k=1;
		while(k<=n-i){
			cout<<" ";
			k=k+1;
		}
	int j=1;
		while(j<=i+d){
			cout<<"*";
			j=j+1;
		}
		cout<<endl;
		i=i+1;
		d=d+1;
	}
}
