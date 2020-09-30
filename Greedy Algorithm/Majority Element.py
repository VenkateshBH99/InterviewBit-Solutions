class Solution:
    # @param A : tuple of integers
    # @return an integer
    def majorityElement(self, A):
        ma_in=0
        count=1
        for i in range(len(A)):
            if A[ma_in]==A[i]:
                count+=1
            else:
                count-=1
            if count==0:
                ma_in=i
                count=1
                
        return A[ma_in]
