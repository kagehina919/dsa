#include <iostream>
#include <algorithm>

using namespace std;

int rbs(a, high, low, m) {
	med = low + (high-low)/2;
	if(m == a[med]) {
		return med;
	}
	else if(m > a[med]) {
		rbs(a, high, med+1, m);
	}
	else rbs(a, med-1, low, m);
}

int main() {
	int high = n-1;
	int low = 0;
	rbs(a, high, low, m);
}
