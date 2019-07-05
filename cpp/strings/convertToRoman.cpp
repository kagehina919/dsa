#include <bits/stdc++.h>
using namespace std;
int value(char r) { 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
}
int convert(string a) {
    int res = 0;
    for(int i=0;i<len(a);i++) {
        s1 = value(a[i]);
        if(i+1<len(a)) {
            int s2 = value(a[i+1]);
            if(s2>s1) {
                res = res+s1;
            }
            else res = res+s2-s1;
        }
        else res = res + s1;
    }
    cout << res << endl;
}
int main() {
    int n;
    string a;
    for(int i=0;i<n;i++) {
        cin >> a;
        convert(a);
    }
}