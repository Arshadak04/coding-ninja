#include<iostream>
using namespace std;

void n_number(int n){                               //making a function prime
	 int a=1;
	 while(n>=a){
	 	cout<<a<<endl;
	 	a++;
	 }
	 
}

int main(){
	int n;
	cin>>n;
	n_number(n);
}
