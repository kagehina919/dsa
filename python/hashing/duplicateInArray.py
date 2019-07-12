class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        dict = {}
        for i in range(len(A)):
            if A[i] not in dict:
                dict([A[i]] = 1
            else dict[A[i]] += 1
        for i in range(len(A)):
            if dict[A[i]] == 2:
                return A[i]
        return -1;
