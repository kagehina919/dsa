#include <bits/stdc++.h>
using namespace std;
void remove(string s, int l, int r) {
    if(s[l] == s[l+1]) {
        s.remove(s.begin() + (l+1));
        l = l+1;
        remove(s, l, r);
    }
    else{
        l = l+1;
        remove(s, l, r);
    }
}
int main() {
    string s;
    cin >> s;
    int r = len(s);
    int l = 0;
    remove(s, l, r-1);
    cout << s << endl;
    return 0;
}