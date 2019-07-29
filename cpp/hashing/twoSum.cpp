// O(n) solution to problem using hashing

vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> res;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++) {
        int k = B-A[i];
        if(mp.find(k) != mp.end()) {
            res.push_back(mp.at(k)+1);
            res.push_back(i+1);
            return res;
        }
        if(mp.find(A[i]) == mp.end()) mp[A[i]] = 1;
    }
    return res;
}

// 4 sum approach
vector<vector<int> > Solution::fourSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    unordered_map<int,vector<int>> mp;
    for(int i=0;i<A.size();i++) {
        for(int j=i+1;j<A.size();j++) {
            int k = A[i]+A[j];
            int m = B-k;
            if(mp.find(m) != mp.end()) {
                res.push_back(mp.at(m));
                res.push_back([A[i], A[j]]);
                return res;
            }
            if(mp.find(k) == mp.end()) mp[k] = [A[i], A[j]];
        }
    }
    return res;
}