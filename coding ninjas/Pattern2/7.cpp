#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	
	int i=1;
	int j;
	int k;
	while(i<=n){
		j=1;
		while(j<=n-i){
			cout<<" ";                  // these will print spaces , j is also defined for spaces
			j++;
		}
		k=1;
		while(k<=i){
			cout<<"*";                       // these will print number , k will also defined for number
			k++;
			
		}
		
		j=i-1;
		while(j>=1){
			cout<<"*";
			j=j-1;
		}
		
		cout<<endl;
		i++;
		
	}
}
