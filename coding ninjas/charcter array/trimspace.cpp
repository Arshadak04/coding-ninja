#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[]) {
    // Write your code here
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    
  for(int i=0;i<count;i++){
  	if(str[i]==''){
  		str[i]='';
	  }
  }
    
}

int main() {
   
    char str[100];
    cin.getline(str,100);
    reverse(str);
    cout<<str;
}
