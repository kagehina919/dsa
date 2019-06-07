// https://codeforces.com/contest/1173/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z;
    cin >> x;
    cin >> y;
    cin >> z;
    if(x==y && z==0) {
        cout << 0 << endl;
    }
    else if(x>y+z) {
        cout << "+" << endl;
    }
    else if(y>x+z) {
        cout << "-" << endl;
    }
    else if(z>x+y || z==x+y || x == y+z || y == x+z) {
        cout << "?" << endl;
    }
    else cout << "?" << endl;
}
