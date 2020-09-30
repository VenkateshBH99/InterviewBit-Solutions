class Solution:
    # @param A : tuple of integers
    # @return an integer
    def maximumGap(self, A):
        arr=[]
        for i in range(len(A)):
            arr.append([A[i],i])
    
        arr.sort(key=lambda k:k[0])
    
        
        ans=0
        curr=arr[-1][0]
        ma=arr[-1][1]
        for i in range(len(arr)-2,-1,-1):
            if ma>arr[i][1]:
                ans=max(ans,ma-arr[i][1])
            else:
                ma=arr[i][1]
        return ans