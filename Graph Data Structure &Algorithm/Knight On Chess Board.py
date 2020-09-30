class cell:
    def __init__(self,x=0,y=0,dist=0):
        self.x=x
        self.y=y
        self.dist=dist
def isInside(x,y,N,M):
    if(x>=1 and x<=N and y>=1 and y<=M):
        return True
    return False
def minStep(knight,tar,N,M):
    dx = [2, 2, -2, -2, 1, 1, -1, -1] 
    dy = [1, -1, 1, -1, 2, -2, 2, -2]
    que=[]
    que.append(cell(knight[0],knight[1],0))
    visited=[[False for i in range(M+1)] for j in range(N+1)]
    visited[knight[0]][knight[1]]=True
    while que:
        t=que.pop(0)
        if(t.x==tar[0] and t.y==tar[1]):
            return t.dist
        for i in range(8):
            x=t.x+dx[i]
            y=t.y+dy[i]
            if isInside(x,y,N,M) and not visited[x][y]:
                visited[x][y]=True
                que.append(cell(x,y,t.dist+1))
    return -1

class Solution:
    # @param A : integer
    # @param B : integer
    # @param C : integer
    # @param D : integer
    # @param E : integer
    # @param F : integer
    # @return an integer
    def knight(self, A, B, C, D, E, F):
        return minStep([C,D],[E,F],A,B)
        
