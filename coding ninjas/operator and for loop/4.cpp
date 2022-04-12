#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
  int n;
    cin>>n;
    for(int d=2;n>d;d++){
        
        for(int j=2;d>j;j++){
            d%j;
            if(d%j==0){
                
                cout<<d<<endl;
                break;
            }
            
        }
            
            
    }
    
    
}
