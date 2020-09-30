class Graph:
    def __init__(self,V):
        self.V=V
        self.graph=[[] for i in range(V)]
    def addEdge(self,u,v):
        self.graph[u].append(v)
        self.graph[v].append(u)
    def bfs(self,s):
        dis=[-1 for i in range(self.V)]
        #print(s)
        #print(self.graph)
        dis[s]=0
        queue=[]
        queue.append(s)
        while queue:
            
            q=queue.pop(0)
            for i in self.graph[q]:
                if dis[i]==-1:
                    dis[i]=dis[q]+1
                    queue.append(i)
        ma=0
        ind=-1
        #print(dis)
        for i in range(len(dis)):
            if dis[i]>ma:
                ma=dis[i]
                ind=i
        return [ind,ma]
        
    def longest(self,s):
        t1=self.bfs(s)
        t2=self.bfs(t1[0])
        return t2[1]
            
        
class Solution:
    # @param A : list of integers
    # @return an integer
    def solve(self, A):
        #print(A)
        g=Graph(len(A))
        s=0
        for i in range(len(A)):
            if A[i]==-1:
                s=i
            else:
                g.addEdge(i,A[i])
        
        return g.longest(s)
