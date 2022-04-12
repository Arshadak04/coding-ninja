#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    
    	int n;
	cin>>n;
	int x;
	int y=0;
	int pv;
	int rev=0;
	while(n>0){
		
		pv=2^y;
		
		x=n%10;
		rev=rev+pv*x;
		n=n/10;
		y++;
		//n==y;
	}
	cout<<rev;
    
    
}
