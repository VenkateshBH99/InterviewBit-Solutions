class Solution:
    # @param A : list of strings
    # @return an integer
    def dfs(self,A,T,i,j,m,n):
        if i<0 or i>=m or j<0 or j>=n:
            return T
        if A[i][j]!="X":
            return T
        T[i][j]=True
        self.dfs(A,T,i+1,j,m,n)
        self.dfs(A,T,i-1,j,m,n)
        self.dfs(A,T,i,j+1,m,n)
        self.dfs(A,T,i,j-1,m,n)
        return T
        
    def black(self, A):
        B=[[] for i in range(len(A))]
        for i in range(len(A)):
            for j in A[i]:
                B[i].append(j)
        A=B
        print(A)
        T=[[False for i in range(len(A[0]))] for j in range(len(A))]
        
        m=len(A)
        n=len(A[0])
        count=0
        for i in range(len(A)):
            for j in range(len(A[0])):
                if A[i][j]=="X" and T[i][j]==False:
                    count+=1
                    self.dfs(A,T,i,j,m,n)
        return count
        
        
        
