#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x;
	long rev=0;
	long pv;
	int y=0;
	
	while(n>0){
		pv=pow(10,y);
		x=n%2;
		rev=rev+pv*x;
		n=n/2;
		y++
		;
		
	}
	 cout<<rev;
}
