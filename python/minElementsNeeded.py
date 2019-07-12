class Solution:
# @param A : string
# @return an integer
    def solve(self, A):
        i = 0
        j = len(A)-1
        candidate = 1
        while j > 0:
            #print(i,j)
            if i == j:
                break
            
            if A[i] != A[j]:
                
                if i == 0:
                    j -= 1
                else:
                    j = candidate -2
                i = 0
                candidate = 1
            else:
                candidate = max(candidate, j + 1)
                i += 1
                j -= 1
                
            
                
        return len(A) - candidate