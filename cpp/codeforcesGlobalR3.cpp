#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    if(a == b) {
        cout << a+b+ 2*c << endl;
    }
    else if(a > b) {
        if(a - b == 1) {
            cout << 2*c + b + a << endl;
        }
        else cout << 2*b + 2*c + 1 << endl;
    }
    else if(b>a) {
        if(b-a == 1) {
            cout << a+b+2*c << endl;
        }
        else cout << 2*a + 2*c + 1 << endl;
    }
}
