class prop:
    def __init__(self,u):
        self.u=u
        self.count=0
class G:
    def __init__(self,n):
        self.graph=[[] for i in range(n)]
        self.V=[prop(i) for i in range(n)]
    def addEdge(self,u,v):
        self.graph[u-1].append(v-1)
        self.V[v-1].count+=1
    
    def topology(self):
        q=[]
        for i in range(len(self.V)):
            if self.V[i].count==0:
                q.append(i)
        T=[]
        while q:
            s=q.pop(0)
            T.append(s)
            for i in self.graph[s]:
                self.V[i].count-=1
                if self.V[i].count==0:
                    q.append(i)
        if len(T)==len(self.V):
            return 1
        return 0
            
        
class Solution:
    # @param A : integer
    # @param B : list of integers
    # @param C : list of integers
    # @return an integer
    def solve(self, A, B, C):
        g=G(A)
        for i in range(len(B)-1):
            g.addEdge(B[i],B[i+1])
        for i in range(len(C)-1):
            g.addEdge(C[i],C[i+1])
        return g.topology()
            
        
