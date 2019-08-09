// https://www.interviewbit.com/problems/greatest-common-divisor/

#include <vector>
int Solution::gcd(int a, int b) {
    if(a==b) return a;
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return gcd(a-b, b);
    else return gcd(a, b-a);
}
