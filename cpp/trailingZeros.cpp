// https://www.interviewbit.com/problems/trailing-zeros-in-factorial/

int Solution::trailingZeroes(int A) {
    int cnt = A/(5) + A/(5*5) + A/(5*5*5) + A/(5*5*5*5) + A/(5*5*5*5*5) + A/(5*5*5*5*5*5) + A/(5*5*5*5*5*5*5) + A/(5*5*5*5*5*5*5*5) + A/(5*5*5*5*5*5*5*5*5) + A/(5*5*5*5*5*5*5*5*5*5);
    
    return cnt;
}

