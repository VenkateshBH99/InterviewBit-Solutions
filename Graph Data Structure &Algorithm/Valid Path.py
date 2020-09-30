class Solution:
    # @param A : integer
    # @param B : integer
    # @param C : integer
    # @param D : integer
    # @param E : list of integers
    # @param F : list of integers
    # @return a strings
    def solve(self, A, B, C, D, E, F):
        X=[0,0,1,1,1,-1,-1,-1]
        Y=[1,-1,0,1,-1,0,1,-1]
        rect=[[0 for i in range(B+1)] for j in range(A+1)]
        for i in range(A+1):
            for j in range(B+1):
                for k in range(C):
                    if pow((pow(E[k]-i,2)+pow(F[k]-j,2)),1/2)<=D:
                        rect[i][j]=1
                        break
        if rect[0][0]==1 or rect[A][B]==1:
           return "NO"
        q=[(0,0)]
        rect[0][0]=1
        while q:
           s=q.pop(0)
           x=s[0]
           y=s[1]
           if x==A and y==B:
               return "YES"
           for i in range(8):
               newX=x+X[i]
               newY=y+Y[i]
               if newX>=0 and newX<=A and newY>=0 and newY<=B and rect[newX][newY]==0:
                   rect[newX][newY]=1
                   q.append((newX,newY))
        return "NO"
