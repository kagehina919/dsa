#include <bits/stdc++.h>

using namespace std;

int index(int arr, int n) {
    for(int i=n-1;i>=0;i--) {
        if(arr[i] == 1) return i;
    }
}

int main() {
    int arr[] = [0,1,1,1,0,0,0,1,1,0,1,0,1];
    int n = len(arr);
    return index(arr, n);
}