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

// O(n) solution, with O(1) space complexity
int findWater(int arr[], int n) 
{ 
    // initialize output 
    int result = 0; 
      
    // maximum element on left and right 
    int left_max = 0, right_max = 0; 
      
    // indices to traverse the array 
    int l = 0, h = n-1; 
      
    while(l <= h)  
    { 
        if(arr[lo] < arr[hi]) 
        { 
            if(arr[l] > left_max) 
            // update max in left 
            left_max = arr[l]; 
            else
            // water on curr element = max - curr 
            result += left_max - arr[l]; 
            l++; 
        } 
        else
        { 
            if(arr[h] > right_max) 
            // update right maximum 
            right_max = arr[h]; 
            else
            result += right_max - arr[h]; 
            h--; 
        } 
    } 
      
    return result; 
} 

int main() {
    int arr[] = [3,0,1,2,4];
    int res = findwater(arr, n);
    return res;
}