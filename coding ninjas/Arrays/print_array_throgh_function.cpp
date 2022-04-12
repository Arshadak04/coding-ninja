#include<iostream>
using namespace std;

void print_array (int input[], int n){

	for(int i=0;i<n;i++){
		cout<<input[i]<<" ";
	}
	
	
}

int main(){
	int n;
	cout<<" enter n"<<endl;
	cin>>n;
	int input[100];
	cout<<" enter n number"<<endl;
	for(int i=0;i<n;i++){
		cin>>input[i];
	}
	print_array(input,n);
}
