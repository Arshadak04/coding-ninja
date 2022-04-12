#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    //Write your code here
int val=1;
    int i=0;
    int j=n-1;
    while(i<=j){
        if(val%2==1){
        arr[i]=val;
        val++;
        i++;
        }
     else{
         arr[j]=val;
        val++;
        j--;
     }
        
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
