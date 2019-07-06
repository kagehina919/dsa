/* The task here is to find the first occurrence of a string in another.
   The strstr() function in c++ does the same job.
   Here, use of 2 pointer technique can get the solution in O(n),
   a simple solution of running 2 loops is also possible with a complexity of O(n^2) */

// 2 loops solution
#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    string x;
    cin >> x;
    int sum = 0;
    int n = len(s);
    int m = len(x);
    if(m>n) cout << -1 << endl;
    else {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(s[i] == x[j]) {
                    sum += 1;
                }
            if(sum == m) return i+1;
            }
        }
        return -1;
    }
}

// Using 2 pointers technique
int main1() {
    string s;
    cin >> s;
    string x;
    cin >> x;
    int sum = 0;
    int n = len(s);
    int m = len(x);
    if(m>n) cout << -1 << endl;
    for(int i=0;i<n;i++) {
        int j = 0;
        while(j<m && i<n && s[i] == x[j]) {
            i++;
            j++;
        }
        if(j == m) return (i-j+1);
    }
    return -1;
}