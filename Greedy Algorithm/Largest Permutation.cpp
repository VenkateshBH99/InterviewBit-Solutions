vector<int> Solution::solve(vector<int> &A, int B) {
    int n = A.size();
    vector<int>pos(n+1);
    for(int i=0;i<n;i++)
    {
        pos[A[i]] = i;
    }
    
    for(int i=0;i<n;i++)
    {
        if(B)
        {
            if(A[i]==n-i)
            {
                continue;
            }
            
            int temp = pos[n-i];
            pos[A[i]] = temp;
            pos[n-i] = i;
            swap(A[i],A[temp]);
            B--;
        }
    }
    return A;
}
