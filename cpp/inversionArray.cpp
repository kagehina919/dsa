#include <bits/stdc++.h>

using namespace std;

int swap(int a, int b) {
    temp = a;
    a = b;
    b = temp;
    return a, b;
}

int inversion(int arr, int n) {
    int count = 0;
    for(int i=0;i<n-1;i++) {
        if(arr[i] > arr[i+1]) {
            swap(arr[i], arr[i+1]);
            count += 1;
        }
    }
    return count;
}

int main() {
    int arr[] = [1,4,2,3,5,7,6];
    int n = len(arr);
    int res = inversion(arr, n);
    return res;
}