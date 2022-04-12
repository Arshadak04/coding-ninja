#include<iostream>
using namespace std;
int main(){
	int a;
	a=cin.get();
	int count=0;
	int b=0;
	int c=0;
	

	while(a != '$'){
		a=cin.get();
		
		if(a>='a'&& a<='z'){
			b++;
		}
		
		 if(a>='0' && a<='9') {
			c++;
		}
		
		count++;
	}
	
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<count-b-c<<endl;
}
