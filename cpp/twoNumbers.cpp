#include <bits/stdc++.h>

using namespace std;

int twoNumbers(int X, int Y) {
    for(int i=0;i<len(X);i++) {
        for(int j=0;j<len(Y);j++) {
            if(pow(X[i], Y[j])>pow(Y[j], X[i])) {
                cout << X[i] << Y[j] endl;
            }
        }
    }
    return 0;
}

int main() {
    int X[] = [1,2,3];
    int Y[] = [3,4,5];
    twoNumbers(X, Y);
    return 0;
}