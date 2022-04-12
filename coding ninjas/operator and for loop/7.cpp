#include<iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
*/
	int a;
	a=cin.get();
	int count=0;
	int b=0;
	int c=0;
	

	while(a != '$'){
		
		if(a>='a'&& a<='z'){
			b++;
		}
		
		else if(a>='0' && a<='9') {
			c++;
		}
		
		else if( a==' ' || a=='\t' || a=='\n'){
            
            count++;
        }
        a=cin.get();
	}
	
	cout<<b<<endl;
	cout<<c<<endl;
	cout<<count<<endl;
}
