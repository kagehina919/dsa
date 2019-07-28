#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Solution::anagrams(const vector<string> &A) {
    unordered_map<string, vector<int>> mp;
    vector<vector<int>> v;
    for(int i=0;i<A.size();i++) {
        string s = A[i];
        sort(s.begin(), s.end());
        mp[s].push_back(i+1);
    }
    for(auto p:mp) {
        v.push_back(p.second);
    }
    return v;
}