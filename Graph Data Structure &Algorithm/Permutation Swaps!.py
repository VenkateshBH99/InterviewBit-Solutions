class G:
    def __init__(self,n):
        self.T=[False for i in range(n)]
        self.graph=[[] for i in range(n)]
        self.curr=0
        self.assign=[None for i in range(n)]
        
    def addEdge(self,u,v):
        self.graph[u].append(v)
        self.graph[v].append(u)
        
    def dfs(self,s):
        self.assign[s]=self.curr
        self.T[s]=True
        for i in self.graph[s]:
            if self.T[i]==False:
                self.dfs(i)
        
        
class Solution:
    # @param A : list of integers
    # @param B : list of integers
    # @param C : list of list of integers
    # @return an integer
    def solve(self, A, B, C):
        n=len(A)
        g=G(n)
        for i in range(len(C)):
            g.addEdge(A[C[i][0]-1]-1,A[C[i][1]-1]-1)
            
        for i in range(n):
            if g.T[i]==False:
                g.dfs(i)
                g.curr+=1
        for i in range(len(A)):
            A[i]=g.assign[A[i]-1]
            B[i]=g.assign[B[i]-1]
        print(g.assign)
        print(A)
        print(B)
        if A==B:
            return 1
        return 0
