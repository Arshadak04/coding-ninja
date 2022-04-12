#include <iostream>

using namespace std;

int findUnique(int *arr, int size)
{
   int i=0,j=0;
    
for(i=0;i<size;i++){
    
     bool ans=true;
         for(j=0;j<size;j++){ 
             if(arr[i]==arr[j] && i!=j){
               ans=false;
                break; 
                      }
                 }
     if(ans == true)return arr[i];
    
            }
  
    

   
    //Write your code here
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	}

	return 0;
}
