#include <iostream>
#include <cstring>
using namespace std;

void reverse(char str[]) {
    // Write your code here
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    
    int start=0;
    int end=count-1;
    while (start < end)
    {
       int temp=str[start];
       str[start]=str[end];
       str[end]=temp;
       start++;
       end--;
    }
    
}

int main() {
   
    char str[100];
    cin.getline(str,100);
    reverse(str);
    cout<<str;
}
