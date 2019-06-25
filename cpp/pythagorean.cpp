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