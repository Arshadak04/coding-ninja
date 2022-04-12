#include <iostream>
using namespace std;

int main() {
	int a[100][100];
	int m, n;
	cin >> m >> n;


	// Taking input
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			cin >> a[i][j];
		}
	}

	
	
	cout << "Column wise : " << endl;
	
	for(int j = 0; j < n; j++) {
		int sum=0;
		for(int i = 0; i < m; i++) {
			sum =sum +a[i][j];
			
		}
		cout <<sum<<" ";
	}
	}
