#include <bits/stdc++.h>
using namespace std;
void permute(string a, int l, int r) {
    if(l==r) {
        cout << a << endl;
    }
    else {
        for(int i = 0;i<=r;i++) {
            swap(a[l], a[i]);
            permute(a, l+1, r);
            swap(a[l], a[i]);
        }
    }
}
int main() {
    string a;
    cin >> a;
    int l = 0;
    int r = len(a);
    permute(a, l, r-1);
    return 0;
}