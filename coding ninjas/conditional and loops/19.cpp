#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,x,y,z;
    cin>>n>>x;
    y=1;
	z=1;
    
    while(x>=y){
        z=z*n;
        y=y+1;
    }
	cout<<z;
}

