#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	for(int i=0;i<n;i++) {
	    int t;
	    char m[t];
	    for(int j=0;j<t;j++) {
	        cin >> m[j];
	    }
	    cout << m[0] << " ";
	    sort(m, m + t);
	    for(int j=1;j<t;j++) {
	        if(m[j] == m[j-1]) cout << -1 << " ";
	        else cout << m[j] << " ";
	    }
	    cout << endl;
	}
	return 0;
}