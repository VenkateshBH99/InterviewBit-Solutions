int Solution::solve(vector<int> &A, int B) {
    vector<int> left(B);
    vector<int> right(B);
    left[0]=A[0];
    for(int i=1;i<B;i++)
    {
        left[i]=A[i]+left[i-1];
    }
    int n=A.size();
    right[0]=A[n-1];
    int j=1;
    for(int i=n-2;i>(n-1-B);i--)
    {
        right[j]=A[i]+right[j-1];
        j++;
    }
    int ma=max(left[B-1],right[B-1]);
    for(int i=0;i<B;i++)
    {
        int curr=left[i]+right[B-1-i-1];
        ma=max(ma,curr);
    }
    return ma;
    
}
