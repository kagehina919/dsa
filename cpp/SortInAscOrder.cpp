#include <stdio.h>

using namespace std;

void sort(int arr, int n, vector<int> &C) {
    for(int i=0;i<n;i++) {
        if(arr[i] == 0) {
            C.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++) {
        if(arr[i] == 1) {
            C.push_back(arr[i]);
        }
    }

    for(int i=0;i<n;i++) {
        if(arr[i] == 2) {
            C.push_back(arr[i]);
        }
    }
}

int main() {
    int arr[] = [0,1,2,1,2,1,0,0,0,1,2];
    int n = len(arr);
    vector<int> C;
    sort(arr, n, C);
    return 0;
}