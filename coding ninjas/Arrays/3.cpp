// sum of array                     
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;     // number elemts in array;
	
	int array1[100];
	
	
	for(int i=0;i<n;i++){                      //taking inputs n of every element in array
		cin>>array1[i];

	}
	
	     int sum=0;      
		 for(int i=0;i<n;i++){                
		sum=array1[i]+sum;	
	}
	cout<<sum;
}
