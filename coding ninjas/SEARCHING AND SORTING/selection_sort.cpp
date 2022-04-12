#include<iostream>
using namespace std;
void selectionsort(int input[],int n){
	for(int i=0;i<n-1;i++){
		int min=input[i];
		int min_index=i;
		for(int j=i+1;j<n;j++){
			if(min>input[j]){
				min=input[j];
				min_index=j;
			
			}
		}
		int temp=input[i];
				input[i]=min;
				input[min_index]=temp;
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
	selectionsort(input,n);
	printarray(input,n);
	
}
