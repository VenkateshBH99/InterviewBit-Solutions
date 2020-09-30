class Solution:
    # @param A : list of integers
    # @return a list of integers
    def subUnsort(self, A):
        B=list(A)
        B.sort()
        a=-1
        b=-1
        for i in range(len(A)):
            if a==-1 and A[i]!=B[i]:
                a=i
                b=i
            elif A[i]!=B[i]:
                b=i
        if b==-1:
            return [-1]
        return [a,b]