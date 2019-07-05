#include <bits/stdc++.h>
using namespace std;
void rotated(string a, string b) {
    int n = len(b);
    int m = len(a);
    string s;
    s.append(a[m-1]);
    s.append(a[m-2]);
    for(int i=0;i<m-2;i++) {
        s.append(a[i]); 
    }
    if(s==b) {
        cout << "YES" << endl;
    } else cout<<"NO"<< endl;
}
int main() {
    string a;
    string b;
    cin >> a;
    cin >> b;
    rotated(a, b);
}