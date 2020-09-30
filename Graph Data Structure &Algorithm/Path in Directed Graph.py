class G:
    def __init__(self,n):
        self.graph=[[] for i in range(n)]
        self.T=[False for i in range(n)]
        self.n=n
        self.ok=0
        
    def add_edge(self,u,v):
        self.graph[u].append(v)
        
    def dfs(self):
        q=[0]
        while q:
            s=q.pop(0)
            self.T[s]=True
            if s==self.n-1:
                self.ok=1
                return
            for i in self.graph[s]:
                if self.T[i]==False:
                    q.append(i)
        
                
        
class Solution:
    # @param A : integer
    # @param B : list of list of integers
    # @return an integer
    def solve(self, A, B):
        g=G(A)
        for i in range(len(B)):
            g.add_edge(B[i][0]-1,B[i][1]-1)
        g.dfs()
        return g.ok
