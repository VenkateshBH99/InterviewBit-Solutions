class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maxSubArray(self, A):
        su=-100000
        s=0
        for i in A:
            s+=i
            if s>su:
                su=s
            if s<0:
                s=0
        return su