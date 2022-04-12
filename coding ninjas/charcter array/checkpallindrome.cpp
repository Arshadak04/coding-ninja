#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    // Write your code here
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    
    int start=0;
    int end=count-1;
    while (start < end)
    {
       if(str[start]!=str[end]){
           return false;
       }
        start++;
        end--;
    }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
