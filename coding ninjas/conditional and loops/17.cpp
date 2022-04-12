#include<iostream>
using namespace std;

int main() {
	// Write your code here

    int basic;
	cin>>basic;
	char grade;
	cin>>grade;

	
	double hra,da,pf;
	hra=basic*0.2;
	da=basic*0.5;
	pf=basic*0.11;
    int allow;
    if(grade=='A'){
    allow=1700;
	}
	else if(grade=='B'){
        allow=1500;
    } 
	else {
        allow=1300;
    }
    int ts;
    ts=basic+hra+da+allow-pf;
    
    cout<<ts;
    
     
}
