#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        int x;
        cin >> a[i];
        if(n==1) {
            cout << a[0] << endl;
            break;
        }
        else if(i==0) cout << a[0] << endl;
        else {
            if(i%2 ==0) {
                int j = i/2;
                cout << a[j] << endl;
            }
            else {
                int k = i/2;
                int sum = (a[k] + a[k+1])/2;
                cout << sum << endl;
            }
        }
    }
	return 0;
}