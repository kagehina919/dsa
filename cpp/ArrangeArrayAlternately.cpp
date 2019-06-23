#include <bits/stdc++.h>

using namespace std;

void arrange(int arr, int n) {
    vector<int> C;
    int i=0;
    int j=n-1;
    while(i<n/2 && j>=n/2) {
        C.push_back(arr[j]);
        j--;
        C.push_back(arr[i]);
        i++;
    }
    for(int i=0;i<n;i++) {
        cout << arr[i] << "";
    }
}
void main() {
    int arr[] = [1,2,3,4,5,6,7,8];
    int n = len(arr);
    arrange(arr, n);
}