#include <iostream>
using namespace std;

int numberOfPaths(int m, int n) {
    if (m == 1 || n == 1) 
        return 1; 
    return numberOfPaths(m - 1, n) + numberOfPaths(m, n - 1);
} 

int main() {
	int t;
	cin >> t;
	for(int i=0;i<t;i++) {
	    int m;
	    int n;
	    cin >> m;
	    cin >> n;
	    cout << numberOfPaths(m, n) << endl;
	}
	return 0;
}