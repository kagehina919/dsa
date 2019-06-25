#include <bits/stdc++.h>

using namespace std;

int stocks(int arr, int n) {
    int i = 0;
    int j = n-1;
    int min = 1000000;
    int max = -1000000;
    while(i<j) {
        if(arr[i] < min) {
            min = arr[i];
            i++;
        }
        if(arr[j]>max) {
            max = arr[j];
            j--;
        }
    }
    return (i, j)
}

int main() {
    int arr[] = [1,5,65,76,82];
    int n = len(arr);
    return stocks(arr, n);
}