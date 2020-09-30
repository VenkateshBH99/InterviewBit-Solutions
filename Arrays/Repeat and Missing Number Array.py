class Solution:
    # @param A : tuple of integers
    # @return a list of integers
    def repeatedNumber(self, A):
        T=[False for i in range(len(A)+1)]
        res=[]
        for i in A:
            if T[i]==False:
                T[i]=True
            else:
                res.append(i)
        for i in range(1,len(T)):
            if T[i]==False:
                res.append(i)
        return res
            
                
