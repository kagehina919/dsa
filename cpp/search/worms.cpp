// https://codeforces.com/contest/474/problem/B

#include <bits/stdc++.h>
using namespace std;

int binary_search(int ar[], int c, int N) {
	int h, l, med;
    l = 0;
    h = N-1;
    while(l<=h) {
        med = (h+l)/2;
        if(med == 0) {
        	if(ar[med] >= c) {
        		return 1;
        	}
        }
        if(ar[med] >=  c && ar[med-1] < c) {
        	return med + 1;
        }
        if(ar[med] > c) {
            h = med-1;
        } 
        else if( ar[med] < c){
            l = med + 1;
        }
    }
}

int main() {
	int n, m, i, q, count=0, h, l, c, sum=0;
	cin >> n;
	int a[n];
	int ar[n];
	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	for(i = 0;i<n;i++) {
		sum += a[i];
		ar[i] = sum;
	}
	cin >> q;
	for(i=0;i<q;i++) {
		cin >> c;
		int index = binary_search(ar, c, n);
		cout << index << endl;
	}
	return 0;
}
