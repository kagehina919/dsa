// O(n^2) solution.
int Solution::isPower(int A) {
    for(int i=0;i<A;i++) {
        for(int j=1;j<A;j++) {
            if(pow(i, j) == A) return 1;
        }
    }
    return 0;
}

// Efficient solution
int Solution::isPower(int A) {
    if(A==1) return 1;
    for(int i=2;i<A;i++) {
        int modified = log(A)/log(i);
        int reconstructed = pow((double) i, (double) modified);
        if(reconstructed == A) return 1;
    }
    return 0;
}