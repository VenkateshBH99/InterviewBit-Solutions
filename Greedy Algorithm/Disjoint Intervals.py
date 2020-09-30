class Solution:
    # @param A : list of list of integers
    # @return an integer
    def solve(self, A):
        A.sort(key=lambda k:k[1])
        res=[]
        ma=1
        for i in range(len(A)):
            flag=True
            for j in range(len(res)):
                if res[j][1]<A[i][0]:
                    res[j][0]+=1
                    res[j][1]=A[i][1]
                    ma=max(ma,res[j][0])
                    flag=False
                    break
            if flag:
                res.append([1,A[i][1]])
            
            # res.sort(key=lambda k:k[0],reverse=True)
        return ma
                
                    
