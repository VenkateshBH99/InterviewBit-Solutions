int Solution::solve(int A, vector<int> &B) {
    int sum=0;
    for(int i=0;i<A;i++)
        sum=sum+B[i];
    if(sum%3!=0)
        return 0;
    sum = sum/3;
    
    int ans=0,curr=0,x=0;
    for(int i=0;i<A-1;i++)
    {
        curr+=B[i];
        if(curr==2*sum && i>0)
            ans+=x;
        if(curr==sum)
            x++;
        
    }
    return ans;
}