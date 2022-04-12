#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a=0,b=1,c=1;
    int i;
    bool b1=true;
    while(n!=c|| n>c)
    {
        c=a+b;
        a=b;
        b=c;
       
        i++;
    }
    if(n==c){
        cout<<b1;
        }
        else{
        	b1=false;
        	cout<<b1;}
  
}
