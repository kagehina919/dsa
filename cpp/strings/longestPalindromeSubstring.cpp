#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s) {
    if(s == reverse(s.begin(), s.end())) return true;
    else return false;
}
int palindrome(string a, int n) {
    int max = 0;
    vector<char> vec;
    for(int i = 0;i<n;i++) {
        string s = a[i];
        for(int j = i+1;j<n;j++) {
            s.append(a[j]);
            ispalindrome(s);
            if(ispalindrome(s)) {
                if(len(s)>max) {
                    max = len;
                    vec.push_back(s);
                }
            }
            else break;
        }
    }
    cout << (vec[len(vec)-1]) << endl;
}
int main() {
    string s;
    cin >> s;
    int n = len(s);
    palindrome(s, n);
    return 0;
}

// worse case solution
bool ispalin(string s) {
    if(s.length()<=1) return 1;
    for(int i=0;i<s.length();i++) {
        if(s[i]!=s[s.length()-1-i]) return false;
    }
    return true;
}


string Solution::longestPalindrome(string A) {
    string s="";
    for(int i=0;i<A.length();i++) {
        string a="";
        if(A.length()-i > s.length())
        for(int j=i;j<A.length();j++) {
            a = a+A[j];
            if(a.length()>s.length() && ispalin(a)) s = a;
        }
    }
    return s;
}