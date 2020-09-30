class Solution:
    # @param A : list of strings
    # @return an integer
    def solve(self, A):
        n=len(A)
        if n<3:
            return 0
        B=[]
        for i in A:
            B.append(float(i))
        
        A=B
        a=A[0]
        b=A[1]
        c=A[2]
        for i in range(3,n):
            sum=a+b+c
            if sum>1 and sum<2:
                return 1
            if sum>2:
                if a>b and a>c:
                    a=A[i]
                elif b>a and b>c:
                    b=A[i]
                else:
                    c=A[i]
            else:
                if a<b and a<c:
                    a=A[i]
                elif b<a and b<c:
                    b=A[i]
                else:
                    c=A[i]
        if a+b+c>1 and a+b+c<2:
            return 1
        return 0