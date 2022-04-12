#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=1,j;
	
	while(n>=i){
		j=1;
		while(j<=n){
			char ch='A'+j-1;
			cout<<ch;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}
