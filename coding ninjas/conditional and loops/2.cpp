#include<iostream>                                     //we have to print 1 for uppercase letter ,0 for lowecase letter, and for other -1
using namespace std;                                     // so  we take if else condition here
int main (){
	char check;
	cout<<"Enter the character"<<endl;
	cin>>check;
	if(check>=65 && check<=90){
		cout<<"1"<<endl;
	}
	 else if(check>=97 && check<=122){
		cout<<"0"<<endl;
		}
		else {
			cout<<"-1"<<endl;
		}
}
