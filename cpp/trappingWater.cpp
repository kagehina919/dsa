#include <bits/stdc++.h>

using namespace std;

int findwater(int arr, int n) {
    // creating left and right arrays to store the values of l and r walls on l & r of the
    // givenarray point
    int l[n];
    int r[n];

    // populating the left array l
    l[0] = arr[0]; 
    for (int i = 1; i < n; i++) 
       left[i] = max(left[i-1], arr[i]); 
  
    // populating the right array r 
    r[n-1] = arr[n-1]; 
    for (int i = n-2; i >= 0; i--) { 
       right[i] = max(right[i+1], arr[i]);
    }

    // to find the accumulated water
    int water = 0;
    for(int i=0;i<n;i++) {
        water += (min(l[i], r[i]) - arr[i]);
    }
    return water;
}

int main() {
    int arr[] = [3,0,1,2,4];
    int res = findwater(arr, n);
    return res;
}