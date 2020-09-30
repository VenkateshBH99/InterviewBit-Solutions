vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int> right(n);
    right[n-1]=A[n-1];
    vector<int> ans;
    if(n==0) return ans;
    ans.push_back(A[n-1]);
    for(int i=n-2;i>-1;i--)
    {
        right[i]=max(A[i],right[i+1]);
        if(right[i]==A[i]) ans.push_back(A[i]);
    }
    
    
    
    // for(int i=0;i<n-1;i++)
    // {
    //     if(A[i]==right[i]) ans.push_back(A[i]);
    // }
    // ans.push_back(A[n-1]);
    
    return ans;
}
