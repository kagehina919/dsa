// https://www.hackerearth.com/practice/algorithms/searching/binary-search/tutorial/

/*
// Sample code to perform I/O:

#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										// Reading input from STDIN
	cout << "Input number is " << num << endl;		// Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, i, b, q, c, med;
    cin >> N;
    int a[N];
    for(i=0;i<N;i++) {
        cin >> b;
        a[i] = b;
    }
    sort(a, a+N);
    cin >> q;
    for(i=0;i<q;i++) {
        cin >> c;
        int h, l;
        l = 0;
        h = N-1;
        while(l<=h) {
            if((h+l)%2==0) {
                med = (h+l)/2;
            } else {
                med = (h+l+1)/2;
            }
            
            if(a[med] > c) {
                h = med-1;
            } 
            else if( a[med] < c){
                l = med + 1;
            }
            else {
                cout << med+1 << endl;
                break;
            }
        }
        
    }
    
}
