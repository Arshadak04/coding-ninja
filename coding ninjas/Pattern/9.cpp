#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1;
	int j;
	int x=1;
	
	while(n>=i){
		j=1;
		while(j<=i){
			cout<<x;
			x=x+1;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
