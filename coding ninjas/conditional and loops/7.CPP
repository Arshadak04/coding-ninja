#include<iostream>
using namespace std;
int main(){
	int s,e,w;
	cin>>s>>e>>w;
	
	int y;
	while(s<=e){
		y=(s-32)*5.0/9;
		cout<<s<<" ";
		s=s+w;
		cout<<y<<endl;
		
	}
	
}
