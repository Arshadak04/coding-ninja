#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/

    int n;
    cin>>n;
    
    int i=1;
    int j;
    
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
  
}
