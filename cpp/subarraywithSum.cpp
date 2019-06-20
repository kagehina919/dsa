// https://www.geeksforgeeks.org/find-subarray-with-given-sum/

#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int sum;
	int arr[n];
	for(int i=0;i<n;i++) {
		int curs = arr[i];
		for(int j=i+1;j<=n;j++) {
			if(curs == sum) {
				cout << i << j-1 << endl;
			}
			else if(curs > sum || j==n) break;
			curs += arr[j];
		}
		return -1;
	}
}
