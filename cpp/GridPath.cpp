// https://www.interviewbit.com/problems/grid-unique-paths/

int Solution::uniquePaths(int A, int B) {
    int path = 0;
    if(A==1 || B==1) {
        return 1;
    }
    else {
        return uniquePaths(A-1, B) + uniquePaths(A, B-1);
    }
}
