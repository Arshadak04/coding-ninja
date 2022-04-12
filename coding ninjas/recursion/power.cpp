#include<iostream>
using namespace std;
int power(int n, int x){
	if (x==1){
	return n;
	}
//	int smalloutput= power( n, (x-1));   lengthy
//	return n * smalloutput;
	return n * power(n,x-1);
}
int main (){
	int n,x;
	cin>>n>>x;
	cout<<power(n,x);
}
