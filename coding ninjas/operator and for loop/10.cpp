#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=1;
	int x;
	
	while(a<=n){
		x=3*a+2;
		
	
		if (x%4==0){
			a++;
			continue;
		}
		cout<<x<<" ";
		a++;
		
	}
}
