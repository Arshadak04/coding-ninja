#include<iostream>
using namespace std;
int fibonaci(int n){
	if(n==0){
		return 0;
	}
		if(n==1){
		return 1;
	}
	int smalloutput1=fibonaci(n-1);
		int smalloutput2=fibonaci(n-2);
		return smalloutput1+smalloutput2;
	}
	

int main (){
	int n;
	cin>>n;
	cout<<fibonaci(n);
}
