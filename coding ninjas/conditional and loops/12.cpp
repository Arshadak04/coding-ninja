#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int j=1;
	while(i<=n){
	
		while(j<=i){
			cout<<j;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
	
}
