import functools
class Solution:
    # @param A : tuple of integers
    # @return a strings
    def compare(self, a, b):
        if a > b:
            return 1
        elif a < b:
            return -1
        else:
            return 0
    def largestNumber(self, A):
        strA = map(str, A)
        numS = ''.join(sorted(strA, key=functools.cmp_to_key(lambda a,b: self.compare(a+b, b+a)), reverse=True)).lstrip('0')
        return "0" if not numS else numS