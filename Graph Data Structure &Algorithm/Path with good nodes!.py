class G:
    def __init__(self,n,V,C):
        self.graph=[[] for i in range(n)]
        self.V=V
        self.T=[False for i in range(n)]
        self.count=0
        self.C=C
        
    def add_edge(self,u,v):
        self.graph[u].append(v)
        self.graph[v].append(u)
        
    def dfs(self,s):
        
        
            
class Solution:
    # @param A : list of integers
    # @param B : list of list of integers
    # @param C : integer
    # @return an integer
    def solve(self, A, B, C):
        g=G(len(A),A,C)
        for i in B:
            g.add_edge(i[0]-1,i[1]-1)
        g.bfs()
        return g.count
