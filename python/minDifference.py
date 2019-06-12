# https://www.interviewbit.com/problems/minimize-the-absolute-difference/

class Solution:
	# @param A : list of integers
	# @param B : list of integers
	# @param C : list of integers
	# @return an integer
	def solve(self, A, B, C):
	    i = j = k = 0;
	    mini = 1000000000;
	    while(i<len(A) and j<len(B) and k<len(C)):
    	    if(max(A[i], B[j], C[k])-min(A[i], B[j], C[k])<mini):
    	        mini = max(A[i], B[j], C[k])-min(A[i], B[j], C[k])
    	    if(A[i]<=B[j] and A[i]<=C[k]):
    	        i += 1
    	    elif(A[i]>=B[j] and B[j]<=C[k]):
    	        j += 1
    	    else: k += 1
        return mini
