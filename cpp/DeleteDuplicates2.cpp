// https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array-ii/

int Solution::removeDuplicates(vector<int> &A) {
    int l = 0;
    int h = A.size()-1;
    while(l<h) {
        if(h-l == 1) {
            if(A[h] == A[l]) {
                h = A.size()-1;
                l = l+2;
            } 
            else {
                h = A.size()-1;
                l = l+1;
            }
        }
        else if(A[h]!= A[l]) {
            h--;
        }
        else if(A[h]== A[l] && h-l>1) {
            A.erase(A.begin()+h);
            h--;
        }
    }
    return A.size();
}
