void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int m=A.size();
    int n=A[0].size();
    vector<int> a(m,0);
    vector<int> b(n,0);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==0)
            {
                a[i]=1;
                b[j]=1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i][j]==1 && (a[i]==1 || b[j]==1))
            {
                A[i][j]=0;
            }
        }
    }
    
    
    
}
