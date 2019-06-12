// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
    int l = 0;
    int h = A.size()-1;
    while(l<=h) {
        if(A[h] != A[l] && h!=l) {
            h--;
        }
        else if(A[h] == A[l] && h!=l) {
            A.erase(A.begin() + h);
            h--;
        }
        else if(h==l) {
            l++;
            h = A.size()-1;
        }
    }
    return A.size();
}

