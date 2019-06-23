#include <bits/stdc++.h>

using namespace std;

int res(int arr, int n) {
    int sum = (n+1)*(n+2)/2;
    int cSum = 0;
    for(int i=0;i<n;i++) {
        cSum += arr[i];
    }
    return (sum-cSum);
}

int main() {
    int arr[] = [1,2,4,5,6,7,8];
    int res = findMissing(arr, n);
    return res;
}