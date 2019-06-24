#include <bits/stdc++.h>

using namespace std;

int platform(int arr, int dep, int n, int m) {
    int needed = 1;
    int result = 1;
    sort(arr, arr+n);
    sort(dep, dep+m);
    int i = 1;
    int j = 0;
    while(i<n && j<m) {
        if(arr[i]<=dep[j]) {
            result += 1;
            i++;
            if(result > needed) {
                needed = result;
            }
        }
        else {
            result -= 1;
            j++;
        }
    }
    return needed;
}

int main() {
    int arr[] = [0100, 1100, 1200, 1300];
    int dep[] = [0200, 1130, 1215, 1400];
    int n = len(arr);
    int m = len(dep);
    int res = platform(arr, dep, n, m);
    return res;
}