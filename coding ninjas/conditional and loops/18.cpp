#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int s1;
	int s2;
	int x;
	int y;
	
	while(n>=0){
		x=n/10;
		y=n%10;
		if(y/2==0){
			s1=s1+y;
		}
		else{
			s2=s2+y;
		}
		x==n;
	}
	cout<<s1<<" "<<s2;
}
