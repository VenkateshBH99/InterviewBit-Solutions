class Solution:
    # @param A : list of integers
    # @return an integer
    def candy(self, A):
        if not A:
            return 0
            
        res = len(A)*[1]
        
        for i in range(1,len(A)):
           if A[i]>A[i-1]:
               res[i]=res[i-1]+1
        
        for i in range(len(A)-1,0,-1):
           if A[i-1]>A[i]:
               res[i-1]=max(res[i-1],res[i]+1)
        
        return sum(res)
                
                