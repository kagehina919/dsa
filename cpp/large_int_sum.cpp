https://www.hackerearth.com/practice/basic-programming/implementation/basics-of-implementation/practice-problems/algorithm/array-sum-2-725368ac/

#include <iostream>

using namespace std;

int main() {
    int n;
    int i;
    long long int t;
    long long int sum;
    cin >> n;
    sum = 0;
    for(i=0;i<n;i++) {
        cin >> t;
        sum += t;
    }
    cout << sum << endl;
}
