#include <iostream>
using namespace std;

void swapAlternate(int *arr, int size)
{
    //Write your code here
    int i=0,j=1;
    while(i<size-1){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i=i+2;
        j=j+2;
    }
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for (int i = 0; i < size; i++)
		{
			cin >> arr[i];
		}
		swapAlternate(arr, size);
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}
}
