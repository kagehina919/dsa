// Recursive implementation of fibonacci series
int fib(int n) {
    if(n == 1) return 1;
    else if(n == 0) return 1;
    else return (fib(n-1) + fib(n-2));
}

int main() {
    int n;
    cin >> n;
    return fib(n);
}

// Fibonacci DP implementation
int main() {
    int n;
    cin >> n;
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<=n;i++) {
        arr[i] = arr[i-1] + arr[i-2];
    }
    cout << arr[n] << endl;
}

// gfg solution
#include <iostream>
using namespace std;

int main() {
    long long int arr[1000];
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<=1000;i++) {
        arr[i] = (arr[i-1] + arr[i-2])%1000000007;
    }
    int t;
    cin >> t;
    for(int j=0;j<t;j++) {
        int m;
        cin >> m;
        long long int res = arr[m-1]%1000000007;
        cout << res << endl;
    }
    return 0;
}