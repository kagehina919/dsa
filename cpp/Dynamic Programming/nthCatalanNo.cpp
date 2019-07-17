#include <iostream>
using namespace std;

int main() {
	unsigned long int arr[100];
	arr[0] = 1;
	arr[1] = 1;
	for(int i=2;i<=100;i++) {
	    arr[i] = 0;
	    for(int j=0;j<i;j++) {
	        arr[i] += arr[j]*arr[i-j-1]; 
	    }
	}
	int t;
	cin >> t;
	for(int i = 0;i<t;i++) {
	    int m;
	    cin >> m;
	    cout << arr[m+1] << endl;
	}
	return 0;
}