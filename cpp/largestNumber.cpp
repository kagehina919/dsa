#include <bits/stdc++.h>

using namespace std;

int compare(string x, string y) {
    string xy = x.append(y);

    string yx = y.append(x);

    return xy.compare(yx) > 0 ? 1: 0;
}

void largestNumber(vector<char> &A) {
    sort(A.begin(), A.end(), compare);
    for(int i=0;i<n;i++) {
        cout<<A[i]<<"";
    }
}

int main() {
    vector<char> A;
    largestNumber(A);
}