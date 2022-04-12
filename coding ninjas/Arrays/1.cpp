// declaring of array
#include<iostream>
using namespace std;
int main(){
	cout<<"Array problrm :"<<endl;
	cout<< "enter size of array"<<endl;
	int n;
	cin>>n;     // number elemts in array;
	
	int array1[100];
	
	for(int i=0;i<n;i++){ //taking inputs n of every element in array
	cout<<" enter array no " <<i<<endl;   	
	cin>>array1[i];
	}
	
	for(int i=0;i<n;i++){
	cout<<array1[i]<<" ";                    //prints all the elements of array
	}
	
	
	
	
}
