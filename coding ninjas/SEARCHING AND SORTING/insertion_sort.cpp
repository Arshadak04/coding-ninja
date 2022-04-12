#include<iostream>
using namespace std;
void insertion_sort(int input[],int n){
	int temp;
	for(int i=1;i<n;i++){
		temp=input[i];
		int j;
		for(j=i-1;j>=0;j--){
			if(temp<input[j]){
				input[j+1]=input[j];
				}
				else 
				{
				
				break;}
				
		}
		input[j+1]=temp;
		
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
	insertion_sort(input,n);
	printarray(input,n);
	
}
