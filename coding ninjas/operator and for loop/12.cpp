#include<iostream>
using namespace std;

int main() {
	// Write your code here
	
    
    	int n;
	cin>>n;
	int x,y;
	int rev=0;
	while(n>0){
		x=n%10;
		rev=rev*10+x;
		n=n/10;
		//n==y;
	}
	cout<<rev;
    
}

