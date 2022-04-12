#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a=1;
	int x;
	int y=1;
	
	while(a<=n){
		x=3*y+2;
		
	
		if (x%4==0){
			y++;
			continue;
		}
		cout<<x<<" ";
		a++;
		y++;
		
	}
}
