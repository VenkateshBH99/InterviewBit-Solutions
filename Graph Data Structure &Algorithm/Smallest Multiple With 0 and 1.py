class Solution:
    # @param A : integer
    # @return a strings
    
        
    def multiple(self, A):
        que=[]
        que.append(("1",1%A))
        visit=[False for i in range(A+1)]
        visit[1%A]=True
        while que:
            s=que.pop(0)
            if s[1]==0:
                return s[0]
            s1=(s[1]*10)%A
            s2=(s[1]*10+1)%A
            if visit[s1]==False:
                que.append((s[0]+"0",s1))
                visit[s1]=True
            if visit[s2]==False:
                que.append((s[0]+"1",s2))
                visit[s2]=True
                
        return ""
        
        
            
