            
        
        
class Solution:
    # @param A : integer
    # @param B : integer
    # @param C : list of strings
    # @return an integer
    def solve(self, A, B, C):
        
        
        #  m=A
        n=B
        T=[[False for i in range(B)] for j in range(A)]
        pos=[[1,0],[0,1],[-1,0],[0,-1]]
        d=['D','R','U','L']
        graph=[[float('inf') for i in range(B)] for j in range(A)]
        graph[0][0]=0
        q=[[0,0]]
        while q:
            s=q.pop(0)
            
            for i in range(4):
                x=s[0]+pos[i][0]
                y=s[1]+pos[i][1]
                if x>=0 and x<A and y>=0 and y<B:
                    cost= 0 if d[i]==C[s[0]][s[1]] else 1
                    if graph[s[0]][s[1]]+cost<graph[x][y]:
                        graph[x][y]=graph[s[0]][s[1]]+cost
                        if cost==1:
                            q.append([x,y])
                        else:
                            
                            q.insert(0,[x,y])
        # print(graph)
        return graph[A-1][B-1]
                    
