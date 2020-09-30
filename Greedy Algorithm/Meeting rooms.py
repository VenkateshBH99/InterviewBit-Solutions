class Solution:
    # @param A : list of list of integers
    # @return an integer
    def solve(self, A):
        from heapq import heappush,heappop,heapify
        h=[]
        count=0
        for i in A:
            if h==[]:
                count+=1
                heappush(h,i[1])
            else:
                tmp=heappop(h)
                flag=False
                if tmp>i[0]:
                    count+=1
                    flag=True
                    
                if flag:
                    heappush(h,tmp)
                heappush(h,i[1])
                
        return count
