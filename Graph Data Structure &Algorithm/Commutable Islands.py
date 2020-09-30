class prop:
    def __init__(self,u):
        self.u=u
        self.parent=u
        self.rank=0
       
class Solution:
    # @param A : integer
    # @param B : list of list of integers
    # @return an integer
    
    
            
    def solve(self, A, B):
        T=[prop(i) for i in range(A+1)]
        def find(self,u):
            if self.T[u].parent!=u:
                q=self.find(self.T[u].parent)
                self.T[u].parent=q.u
                return q
            return self.T[u]
        def union(self,u,v):
            x=self.find(u)
            y=self.find(v)
            if x.rank>y.rank:
                y.parent=x.u
            elif y.rank>x.rank:
                x.parent=y.u
            else:
                x.rank+=1
                y.parent=x.u
        B.sort(key=lambda k:k[2])
        sum=0
        for i in B:
            if self.find(i[0])!=self.find(i[1]):
                sum+=i[2]
                self.union(i[0],i[1])
        return sum
        
        
