// https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/stakth-1-e6a76632/

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
#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, K, i, num;
    cin >> N;
    cin >> K;
    stack<int> n;
    stack<int> m;
    for(i=0;i<N;i++) {
        cin >> num;
        n.push(num);
    }
    for(i=0;i<K-1;i++) {
        n.pop();
        m.push(n.pop());
    }
    if(m.top()>=n.top()) {
        cout << m.top() << endl;
    } else {
        cout << n.top() << endl;
    }
    if(n.empty()) {
        cout << -1 << endl;
    }
}


