#import <bits/stdc++.h>

using namespace std;

int maxSum(int arr, int n) {
    curr_max = -1000000000;
    curr_sum = 0;
    for(int i=0;i<n;i++) {
        curr_sum += arr[i];
        if(curr_sum>curr_max) {
            curr_max = curr_sum;
        }
        if(curr_sum<0) {
            curr_sum = 0;
        }
    }
    return curr_max;
}

int main() {
    int arr[] = [-2, -3, 4, -1, -2, 1, 5, -3];
    n = len(arr);
    int res = maxSum(arr, n);
    return res;
}