// O(n^2) solution.
int Solution::isPower(int A) {
    for(int i=0;i<A;i++) {
        for(int j=1;j<A;j++) {
            if(pow(i, j) == A) return 1;
        }
    }
    return 0;
}
