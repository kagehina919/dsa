// unoptimized O(n2) solution

#include <bits/stdc++.h>
using namespace std;

int nextGreater(int arr[], int m) {
    int max;
    for(int i=0;i<m;i++) {
        max = arr[i];
        int flag = -1;
        for(int j=i+1;j<m;j++) {
            if(arr[j] > max) {
                flag = arr[j];
                break;
            }
        }
        cout << flag << " ";
    }
    cout << endl;
    return 0;
}

int main() {
	int n;
	cin >> n;
	int result;
	for(int i=0;i<n;i++) {
	    int m;
	    cin >> m;
	    int arr[m];
	    for(int j=0;j<m;j++) {
	        cin >> arr[j];
	    }
	    nextGreater(arr, m);
	}
	return 0;
}