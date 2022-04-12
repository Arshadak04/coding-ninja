#include<iostream>
using namespace std;
int sum_of_array(int a[],int n){
   if (n==0){
return 0;
   }
   int sum=a[0]+sum_of_array(a+1,n-1);
   return sum;
}
   

int main(){
	int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	cin>>a[i];	
	}
	cout<<sum_of_array(a,n);
	}
