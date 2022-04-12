#include<iostream>
using namespace std;
int main() {
	
	
	int n;
	int c;
	cin>>n>>c;
	int a=1;
	if (c==1){
		
		int sum=0;
	    while (a<=n){
		sum=sum+a;
		a++;
	}
	    cout<<sum;
	}
	
	else if(c==2){
		
		int mul=1;
	    while (a<=n){
		mul=mul*a;
		a++;
	}
	cout<<mul;
}
      else {
      	cout<<"-1";
	  }
		
}
      








             /*{
	
	int n;
	cin>>n;
	int a=1,sum=0;
	while (a<=n){
		sum=sum+a;
		a++;
	}
	cout<<sum;
}

	
	{
	int n;
	cin>>n;
	int a=1,mul=1;
	while (a<=n){
		mul=mul*a;
		a++;
	}
	cout<<mul;
}
*/

