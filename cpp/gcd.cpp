// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <vector>
int Solution::gcd(int A, int B) {
    if (A == 0 && B !=0) return B; 
    else if (B == 0 && A != 0) return A; 
    else if (A == B) return A;
    else if (A == B == 0) return 1;
    if (A > B) 
        return gcd(A-B, B); 
    return gcd(A, B-A);
}
