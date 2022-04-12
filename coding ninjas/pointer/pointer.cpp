#include<iostream>
using namespace std;
int main()
{
	int i=10;
	int*p=&i;
	cout<<i<<endl;  //gives i value
	cout<<p<<endl;  // gives addresss of i value
	cout<<*p<<endl;  //gives derefrence address of p means value of i
	cout<<&i<<endl;  // gives address of i
	
	int **p2=&p;
	cout<<p2<<endl;  // adress of p
	cout<<*p2<<endl;    // address of i
	cout<<**p2<<endl;   // value of i 
}
