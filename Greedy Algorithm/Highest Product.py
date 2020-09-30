class Solution:
    # @param A : list of integers
    # @return an integer
    def maxp3(self, A):
        A.sort(reverse=True)
        n=len(A)-1
        if(A[n]>=0):
            p=A[0]*A[1]*A[2]
        elif(A[0]>0):
            p=max(A[0]*A[1]*A[2],A[0]*A[n]*A[n-1])
        elif(A[0]<=0):
            p=A[0]*A[1]*A[2]
        return p
           
