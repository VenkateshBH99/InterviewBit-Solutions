class prop:
    def __init__(self,i):
        self.u=i
        self.count=0
class G:
    def __init__(self,n):
        self.V=[prop(i) for i in range(n)]
        self.graph=[[] for i in range(n)]
        self.n=n
        
    def add_edge(self,u,v):
        self.graph[u].append(v)
        self.V[v].count+=1
        
    def topological(self):
        q=[]
        for i in self.V:
            if i.count==0:
                q.append(i.u)
        T=[]            
        while q:
            s=q.pop(0)
            T.append(s)
            for i in self.graph[s]:
                self.V[i].count-=1
                if self.V[i].count==0:
                    q.append(i)
        if len(T)==self.n:
            return 0
        return 1
        
class Solution:
    # @param A : integer
    # @param B : list of list of integers
    # @return an integer
    def solve(self, A, B):
        g=G(A)
        for i in range(len(B)):
            g.add_edge(B[i][0]-1,B[i][1]-1)
            
        return g.topological()
        
