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