// https://codeforces.com/contest/1182/problem/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count;
	int sum = 0;
	if(n%2==1){
		count = 0;
	}
	else if(n%2 == 0) {
		count = pow(2, n/2);
	}
	cout << count << endl;
}
