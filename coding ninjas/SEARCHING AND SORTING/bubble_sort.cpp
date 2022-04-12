#include<iostream>
using namespace std;
void bubblesort(int input[],int n){


    // for-> i=0 to i<size-1
    // for -> j=0 to j<size-i-1
         for(int i=0;i<n-1;i++){ 
        for(int j=0;j<n-i-1;j++){ 
            if(input[j]>input[j+1]){ 
         //       swap(input[j],input[j+1]); 
         int temp=input[j];
         input[j]=input[j+1];
         input[j+1]=temp;
            }
        }
    }
}






void printarray(int input[],int n){
	for(int i=0;i<n;i++){
		cout<<input[i];
	}
	
}
int main(){
	int input[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	bubblesort(input,n);
	printarray(input,n);
	
}
