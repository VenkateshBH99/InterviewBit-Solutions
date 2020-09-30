class prop:
    def __init__(self,u):
        self.u=u
        self.parent=u
        self.rank=0
class G:
    def __init__(self,n):
        self.n=n
        self.T=[prop(i) for i in range(n)]
        
    def find(self,u):
        if self.T[u].parent!=u:
            s=self.find(self.T[u].parent)
            self.T[u].parent=s.u
            return s
        return self.T[u]
        
    def makepair(self,u,v):
        x=self.find(u)
        y=self.find(v)
        if x.rank>y.rank:
            y.parent=x.u
        elif y.rank>x.rank:
            x.parent=y.u
            
        else:
            x.rank+=1
            y.parent=x.u
            
        
class Solution:
    # @param A : integer
    # @param B : list of list of integers
    # @return an integer
    def solve(self, A, B):
        n=A
        if n==0:
            return 0
        g=G(n)
        for i in range(len(B)):
            u=g.find(B[i][0]-1)
            v=g.find(B[i][1]-1)
            if u.u!=v.u:
                g.makepair(B[i][0]-1,B[i][1]-1)
            else:
                return 1
        return 0
        
        
