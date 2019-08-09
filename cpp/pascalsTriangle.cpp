#include <bits/stdc++.h>
using namespace std;

void pascalTriangle(int n) {
    int c=1;
    for(int i=1;i<=n;i++) {
        cout << c << " ";
        c = c*(n/i-1);
    }
}

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++) {
	    int n;
	    cin >> n;
    	pascalTriangle(n);
	}
	return 0;
}