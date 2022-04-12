#include<iostream>
using namespace std;
bool check_sorted(int a[],int n){
	if(n==0 || n==1){
		return true;
	}
	if(a[0]>a[1]){
		return false;
	}
	bool small_check = check_sorted(a+1,n-1);
	return small_check;
}
int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];	
	}
	for(int i=0;i<n;i++){
	cout<<a[i]<<endl;
	}
	
	cout<<"0 means false and 1 means true ="<<check_sorted(a,n);
}

