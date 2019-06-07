// https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

void Solution::merge(vector<int> &A, vector<int> &B) {
    vector<int> C;
    int n = A.size();
    int m = B.size();
    int i = 0;
    int j = 0;
    while(i<n && j<m) {
        if(A[i]<B[j]) {
            C.push_back(A[i]);
            i++;
        }
        else if(B[j]<=A[i]) {
            C.push_back(B[j]);
            j++;
        }
    }
    if(i<n) {
        for(int a=i;a<n;a++) {
            C.push_back(A[a]);
        }
    }
    if(j<m) {
        for(int b=j;b<m;b++) {
            C.push_back(B[b]);
        }
    }
    A = C;
}

