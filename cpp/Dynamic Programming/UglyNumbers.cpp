#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long int ugly[10000];
    long long int next_multiple_of_2 = 2;
    long long int next_multiple_of_3 = 3;
    long long int next_multiple_of_5 = 5;
    int i2 = 0;
    int i3 = 0;
    int i5 = 0;
    ugly[0] = 1;
    long long int nextUglyNumber=1;
    for(int i=1;i<10000;i++) {
        nextUglyNumber = min(next_multiple_of_2, min(next_multiple_of_3, next_multiple_of_5));
        ugly[i] = nextUglyNumber;
        if(ugly[i] == next_multiple_of_2) {
            i2 = i2+1;
            next_multiple_of_2 = ugly[i2]*2;
        }
        if(ugly[i] == next_multiple_of_3) {
            i3 = i3+1;
            next_multiple_of_3 = ugly[i3]*3;
        }
        if(ugly[i] == next_multiple_of_5) {
            i5 = i5+1;
            next_multiple_of_5 = ugly[i5]*5;
        }
    }
	for(int i=0;i<n;i++) {
	    int m;
	    cin >> m;
        cout << ugly[m-1] << endl;
	}
	return 0;
}