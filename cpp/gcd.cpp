// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <vector>
int Solution::gcd(int A, int B) {
    if (A == 0) 
       return B; 
    if (B == 0) 
       return A; 
    if (A == B) 
        return A; 
    if (A > B) 
        return gcd(A-B, B); 
    return gcd(A, B-A);
}
