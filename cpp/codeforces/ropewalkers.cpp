// By kagehina919, contest: Codeforces Round #568 (Div. 2), problem: (A) Ropewalkers, Accepted, #

#include <bits/stdc++.h>
using namespace std;


int main() {
    int arr[3];
    int d;
    for(int i = 0;i<3;i++) {
        cin>>arr[i];
    }
    cin >> d;
    sort(arr, arr+3);
    int sum = max(0, d-(arr[2]-arr[1])) + max(0, d-(arr[1]-arr[0]));
    cout << sum << endl;
}
