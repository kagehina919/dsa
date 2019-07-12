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

# Another, more efficient solution O(n)
class Solution:
    # @param A : list of integers
    # @return an integer
    def firstMissingPositive(self, A):
        dict = {}
        if len(A) == 1 and A[0]<0:
            return 1
        for i in range(0, len(A)):
            if A[i] not in dict:
                dict[A[i]] = 1
        for i in range(1, len(A)):
            if i not in dict:
                return i
        return len(A)+1