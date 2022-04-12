#include<iostream>
using namespace std;
int main(){                                   // we have to print these pattern
	int n;
	cin>>n;                                  //1
	int i=1,j;                               //2 3
	                                        //3 4 5
	while(n>=i){
		j=1;
		while(j<=i){
			cout<<i+j-1;                    
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
	
	
	/*
		int n;
	cin>>n;
	int i=1,j;
	
	while(n>=i){                                  \\Alternate way to do list
	int p=i;
		j=1;
		while(j<=i){
			cout<<p;
			j=j+1;
			p++;
		}
		cout<<endl;
		i=i+1;
	}
	*/

