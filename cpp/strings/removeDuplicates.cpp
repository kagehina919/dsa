#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<char> vec;
    string a;
    cin >> a;
    int n = len(a);
    sort(a.begin(), a.end());
    for(int i=0;i<n-1;i++) {
        if(a[i]==a[i+1]) i++;
        else {
            vec.push_back(a[i]);
        }
    }
}

// general n^2 solution

int main() {
    string a;
    cin >> a;
    int n = len(a);
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i] == a[j]) {
                a.remove(a.begin()+j);
            }
        }
    }
}