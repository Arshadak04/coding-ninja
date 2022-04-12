#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=1;
	int j;
	
	while(i<=n){
		
		j=1;
		
		
		while(j<=n-i+1){
			
			cout<<j;
			j++;
			
		}
		
		j=i-1;
		while(j>0){
			cout<<"*";
			j--;
		}
		
		
		j=i-1;
		while(j>0){
			cout<<"*";
			j--;
		}
		
		j=1;
		while(j<=n-i+1){
			cout<<n-j-i+2;
			j++;
		}
		
		
		
		
		
		
		
		cout<<endl;
		i++;
	}
}
