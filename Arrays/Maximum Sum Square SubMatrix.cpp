int Solution::solve(vector<vector<int> > &A, int B) {
    int m=A.size();
    int n=A[0].size();
    vector<vector<int>> T=A;
    T[0][0]=A[0][0];

    for(int i=0;i<m;i++)
     for(int j=1;j<n;j++)
      T[i][j]+=T[i][j-1];
    
    for(int j=0;j<n;j++)
      for(int i=1;i<m;i++)
        T[i][j]+=T[i-1][j];
        
    int ma=INT_MIN;
    for(int i=B-1;i<m;i++)
    {
        for(int j=B-1;j<n;j++)
        {
            int a=0,b=0;
            if(i>B-1 && j>B-1)
            {
                ma=max(ma,T[i][j]-T[i-B][j]-T[i][j-B]+T[i-B][j-B]);
            }
            else if(i>B-1)
            {
                ma=max(ma,T[i][j]-T[i-B][j]);
            }
            else if(j>B-1)
            {
                ma=max(ma,T[i][j]-T[i][j-B]);
            }
            else ma=max(ma,T[i][j]);
        }
    }
    return ma;
}
