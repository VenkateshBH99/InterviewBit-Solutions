vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> ans;
    int n=A.size();
    int m=A[0].size();
    for(int j=0;j<m;j++)
    {
        vector<int> tmp{A[0][j]};
        int x=1;
        int y=j-1;
        while(x<n && y>=0)
        {
            tmp.push_back(A[x][y]);
            x++;
            y--;
        }
        ans.push_back(tmp);
    }
    
    for(int i=1;i<n;i++)
    {
        vector<int> tmp{A[i][m-1]};
        int x=i-1;
        int y=m-2;
        while(x<n && y>=0)
        {
            tmp.push_back(A[x][y]);
            x++;
            y--;
        }
        ans.push_back(tmp);
    }
    return ans;
}
