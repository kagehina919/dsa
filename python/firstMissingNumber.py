class Solution:
    # @param A : list of integers
    # @return an integer
    def firstMissingPositive(self, A):
        if len(A) == 1 and A[0] < 0:
            return 1
        elif len(A) == 1 and A[0] > 0:
            return A[0]+1
        else:
            for i in range(1, len(A)):
                if(i not in A):
                    return i
            return A[len(A)-1] + 1