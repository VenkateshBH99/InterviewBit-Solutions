class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @return an integer
    def mice(self, A, B):
        if len(A)!=len(B):
            return -1
        
        ma=0
        for i in range(len(A)):
            if abs(A[i]-B[i])>ma:
                ma=abs(A[i]-B[i])
        return ma