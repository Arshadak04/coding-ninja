#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	
	int i=1;
	int j;
	int k;
	while(i<=n){
		k=1;
		while(k<=n-i+1){
			cout<<n-i+1;                       // these will print stars , k will also defined for stars
			k++;
			
		}
		
		j=1;
		while(j<=i-1){
			cout<<" ";                  // these will print spaces , j is also defined for spaces
			j++;
		}
	
		
		cout<<endl;
		i++;
		
	}
}
