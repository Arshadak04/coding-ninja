#include<iostream>
using namespace std;
bool x_find(int a[],int n,int x){
	if (n==0){
		return false;
	}
	if(a[0]==x){
		return true;
	
	}
	bool c= x_find(a+1,n-1,x);
	return c;
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
	cout<<x_find(a,n,x);
	}
