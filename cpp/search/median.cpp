https://www.interviewbit.com/problems/median-of-array/

double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    float res = 0;
    if(A.size() != 0 && B.size() != 0) {
        vector<int> C(A.size() + B.size());
        merge(A.begin(), A.end(), B.begin(), B.end(), C.begin());
        int first = 0;
        int last = C.size() - 1;
        int med = first + (last - first)/2;
        if(C.size() % 2 == 0) {
            res = (C[med] + C[med +1])/2.0;
            return res; 
        } else return C[med];
    }
    else if(A.size() == 0) {
        int first = 0;
        int last = B.size() - 1;
        int med = first + (last - first)/2;
        if(B.size() % 2 == 0) {
            res = (B[med] + B[med +1])/2.0;
            return res; 
        } else return B[med];
    }
    else if(B.size() == 0){
        int first = 0;
        int last = A.size() - 1;
        int med = first + (last - first)/2;
        if(A.size() % 2 == 0) {
            res = (A[med] + A[med +1])/2.0;
            return res; 
        } else return A[med];
    }
}

