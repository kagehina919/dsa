#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0;i<n;i++) {
        string s;
        cin >> s;
        int m = len(s);
        for(int j=0;j<m;j++) {
            if(s[i]=='0' || s[i]=='1' || s[i]=='2' || s[i]=='3' || s[i]=='4' || s[i]=='5' ||
               s[i]=='6' || s[i]=='7' || s[i]=='8' || s[i]=='9') {
                   cout << -1 << endl;
               }
            else {
                int m = int(s);
                cout << m << endl;
            }
        }
    }
}

// simple solution using stringstream.
Solution::Atoi(const string A) {
    stringstream ss;
    ss >> i;
    if(i<INT_MIN) i = INT_MIN;
    if(i>INT_MAX) i = INT_MAX;
    return i;
}