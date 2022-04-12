#include<iostream>
using namespace std;
int main(){
	int bs;
	cin>>bs;
	char g;
	cin>>g;

	int ts;
	int hra,da,pf;
	hra=bs*(20.0/100);
	da=bs*(50.0/100);
	pf=bs*(11.0/100);
    int v;
    v=bs+hra+da-pf;
    if(g='A'){
    
    ts=v+1700;
    cout<<ts;
	}
	else if(g='B'){
    
    ts=v+1500;
    cout<<ts;
	} 
	else {
		 ts=v+1300;
    cout<<ts;
		
	}
}
