double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    int m = A.size();
    int n = B.size();
    if (m > n) return findMedianSortedArrays(B, A);
    int imin = 0, imax = m, i , j;
    while(imin <= imax)
    {
        i = (imin+imax)/2;
        j = (m+n+1)/2 - i;
        if(j>0 && i<m && B[j-1]>A[i])
            imin = i+1;
        else if(i>0 && j<n && A[i-1] > B[j])
            imax = i-1;
        else
        {
            int m1=0,m2=0;
            if(i==0)
                m1 = B[j-1];
            else if(j==0)
                m1 = A[i-1];
            else
                m1 = max(A[i-1],B[j-1]);
            if((m+n)&1)
                return m1;
            if(i==m)
                m2 = B[j];
            else if(j==n)
                m2 = A[i];
            else
                m2 = min(A[i],B[j]);
            return (m1+m2)/2.0;
        }
    }