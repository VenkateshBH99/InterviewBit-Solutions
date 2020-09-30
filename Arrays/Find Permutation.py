class Solution:
    # @param A : string
    # @param B : integer
    # @return a list of integers
    def findPerm(self, A, B):
        arr=[(i+1) for i in range(B)]
        res=[]
        for i in A:
            if i=='I':
                res.append(arr.pop(0))
            else:
                res.append(arr.pop())
        if arr:
            res.append(arr.pop())
        return res
