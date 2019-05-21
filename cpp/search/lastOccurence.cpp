// https://www.hackerearth.com/practice/algorithms/searching/linear-search/tutorial/

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

using namespace std;

int main() {
    int N, M, a, i;
    int occur = 0; 
    int arr[M];
    cin >> N;
    cin >> M;
    for(i=0;i<N;i++) {
        cin >> a;
        arr[i] = a;
    }
    for(i=0;i<N;i++) {
        if(arr[i]==M) {
            occur = i+1;
        }
    }
    if(occur!=0) {
        cout << occur << endl;
    }
    else cout << -1 << endl;
}
