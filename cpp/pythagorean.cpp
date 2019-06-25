#include <bits/stdc++.h>

using namespace std;

bool main() {
    int arr[] = [3,4,5,12,9,13];
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            for(int k=i+2;k<n;k++) {
                int a = arr[i]*arr[i];
                int b = arr[j]*arr[j];
                int c = arr[k]*arr[k];
                if(a = b+c || b = a+c || c = a+b) {
                    return true;
                } else continue;
            }
        }
    }
    return false;
}

// O(n2) solution

int pythagoras() {
    int arr[] = [3,4,5,12,9,13];
    for(int i=0;i<n;i++) {
        arr[i] = arr[i]*arr[i];
    }

    sort(arr, arr+n);

    for (int i = n - 1; i >= 2; i--) {
        int l = 0;
        int r = i - 1; 
        while (l < r) {
            if (arr[l] + arr[r] == arr[i]) 
                return true;  
            (arr[l] + arr[r] < arr[i]) ? l++ : r--; 
        } 
    }  
    return false; 
}