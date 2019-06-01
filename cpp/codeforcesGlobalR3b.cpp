#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, j;
    long long int m, n, ta, tb, k;
    cin >> m;
    cin >> n;
    cin >> ta;
    cin >> tb;
    cin >> k;
    int a[m];
    int b[n];
    for(i=0;i<m;i++) {
        cin >> a[i];
    }
    for(j=0;j<n;j++) {
        cin >> b[j];
    }
    if(k == 1) {
        for(i=k;i<m;i++){
            for(j=i;j<n;j++) {
                if(b[j]>=a[i] + ta) {
                    cout << b[j] + tb << endl;
                }
            }
        }
    }
    else if(k == m) {
        cout << -1 << endl;
    }
    else if(b[n-1] < a[m-1] + ta) {
        cout << -1 << endl;
    }
    else {
        for(i=k-1;i<m;i++){
            for(j=n-1;j<n;j++) {
                if(b[j]>=a[i] + ta) {
                    cout << b[j] + tb << endl;
                    break;
                }
            }break;
        } 
    }
}
