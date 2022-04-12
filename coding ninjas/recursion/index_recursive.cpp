#include<iostream>
using namespace std;
int x_position(int a[],int n,int x){
	if (n==0){
		return -1;
	}
	if(a[0]==x){
		return 0;
	
	}
	int ans= x_position(a+1,n-1,x);
	if (ans==-1){
		ans=-1;
	}
	else 
		ans=ans+1;
	return ans;
	}

int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];	
	}
	int x;
	cin>>x;
	cout<<x_position(a,n,x);
	}
