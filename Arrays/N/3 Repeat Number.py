class Solution:
    # @param A : tuple of integers
    # @return an integer
    def repeatedNumber(self, A):
        first=float("inf")
        second=float("inf")
        maj1=0
        maj2=0
        for i in A:
            if i==first:
                maj1+=1
            elif i==second:
                maj2+=1
            elif maj1==0:
                first=i
                maj1+=1
            elif maj2==0:
                second=i
                maj2+=1
            else:
                maj1-=1
                maj2-=1
        maj1=0
        maj2=0
        for i in A:
            if i==first:
                maj1+=1
            if i==second:
                maj2+=1
        if maj1>len(A)/3:
            return first
        if maj2>len(A)/3:
            return second
        return -1
            
