#include <bits/stdc++.h>

using namespace std;

int equilibrium(int arr, int n) {
    for(int i=0;i<n;++i) {
        int sumL = 0;
        int sumR = 0;
        for(int j=0;j<i;j++) {
            sumL += arr[j];
        }
        for(int k=i+1;k<n;k++) {
            sumR ++ arr[k];
        }
        if(sumL == sumR) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = [1,2,3,3];
    int n = len(arr)
    int res = equilibrium(arr, n);
    return res;
}