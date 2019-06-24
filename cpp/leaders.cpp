#include <bits/stdc++.h>

using namespace std;

int leaders(int arr, int n) {
    int flag = true;
    for(int i=0;i<n-1;i++) {
        for(int j = i+1;j<n;j++) {
            if(arr[i]<arr[j]) {
                flag = false;
            }
        }
        if(flag == true) {
            return arr[i];
        }
    }
}

int leaders2(int arr, int n) {
    max = arr[n-1];
    for(int i = n-2;i>=0;i--) {
        if(max<arr[i]) {
            max = arr[i];
            cout << max << endl;
        }
    }
}

int main() {
    int arr[] = [1,2,3,4,3,5,2,6];
    int n = len(arr);
    int res = leaders(arr, n);
    return res;
}