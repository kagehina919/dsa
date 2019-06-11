#include <bits/stdc++.h>
using namespace std;

int f(long long int n, long long int f(1), long long int f(2), long long int f(3), long long int c) {
	if(n==1) {
		return f(1);
	}
	else if(n==2) {
		return f(2);
	}
	else if(n==3) {
		return f(3);
	}
	else return f(n) = pow(c, (2*n-6))*f(n-1)*f(n-2)*f(n-3);
}

int main() {
	long long int n;
	long long int f(1);
	long long int f(2);
	long long int f(3);
	long long int c;
	cin >> n;
	cin >> f(1);
	cin >> f(2);
	cin >> f(3);
	cin >> c;
	long long int a = f(n,f(1), f(2), f(3), c);
	long long int res = a%1000000007;
	cout << res << endl;
}
