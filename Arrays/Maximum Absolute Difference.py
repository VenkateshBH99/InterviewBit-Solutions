class Solution:
    # @param A : list of integers
    # @return an integer
    def maxArr(self, A):
        max1=-float("inf")
        max2=-float("inf")
        min1=float("inf")
        min2=float("inf")
        for i in range(len(A)):
            max1=max(max1,A[i]+i);
            max2=max(max2,A[i]-i);
            min1=min(min1,A[i]+i);
            min2=min(min2,A[i]-i);
        sum=max(max1-min1,max2-min2)
        return sum