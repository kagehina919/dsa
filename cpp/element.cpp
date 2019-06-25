#include <bits/stdc++.h>

using namespace std;

int element(int arr, int n) {
    for(int i=0;i<n;i++) {
        int j = 0;
        int k = n-1;
        while(j<k) {
            if(arr[j]<arr[i]) {
                j++;
            } else return;
            if(arr[i]<arr[k]) {
                k--;
            } else return;
        }
        return i;
    }
    return -1;
}

int main() {
    int arr[] = [1,0,2,4,5,6,7,8];
    int n = len(arr);
    return element(arr, n);
}