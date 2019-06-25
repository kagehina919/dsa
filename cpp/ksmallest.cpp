#include <bits/stdc++.h>

using namespace std;

// nlogn solution
int main() {
    int arr[] = [1,2,3,2,4,0,1,5];
    int n = len(arr);
    sort(arr, arr+n);
    cout << arr[k-1];
    return 0;
}

// quick select method
int swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}