#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++) {
        int m;
        cin >> m;
        pq.push(m);
    }
    int m;
    cin >> m;
    for(int i=0;i<m;i++) {
        int q;
        int a;
        cin >> q;
        if(q==1) {
            cin >> a;
            pq.push(a);
        }
        else if(q==2) cout << pq.top() << endl;
    }
    return 0;
}