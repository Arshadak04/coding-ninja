#include<iostream>
using namespace std;
int main(){
	int a;
	a=cin.get();
	int count=0;
	while(a != '$'){
		a=cin.get();
		count++;
	}
	
	cout<<count<<endl;
}
