// maximum of array 
#include<iostream>
#include<climits>
using namespace std;
int main(){
	int n;
	cin>>n;     // number elemts in array;
	
	int array1[100];
	
	
	for(int i=0;i<n;i++){                      //taking inputs n of every element in array
		cin>>array1[i];

	}
	
	     int max=INT_MIN;       //int max=0;      // int max=array1[0];
		                 
	     for(int i=0;i<n;i++){                  //for(int i=1;i<n;i++){
		
		if(array1[i]>max){
			
			max=array1[i];
			
		}
		
	}
	cout<<"max element is "<<max<<endl;
}
