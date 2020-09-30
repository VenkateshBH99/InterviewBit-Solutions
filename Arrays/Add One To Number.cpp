vector<int> Solution::plusOne(vector<int> &A) {
    int rem=1;
    vector<int> ans;
    int stop=0;
    for(int i=A.size()-1;i>-1;i--)
    {
        if(rem==0)
        break;
        A[i]+=rem;
        int q=A[i]%10;
        rem=A[i]/10;
        A[i]=q;
        
        
    }
    if(rem>0)
    {
        A.insert(A.begin(),rem);
        return A;
    }
    
    
    bool flag=true;
    for(int i=0;i<A.size();i++)
    {
        if(flag && A[i]==0) continue;
        if(A[i]!=0)
        {
            
            flag=false;
        }
        ans.push_back(A[i]);
    }
    
    return ans;
}
