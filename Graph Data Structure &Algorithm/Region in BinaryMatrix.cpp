void dfs(vector<vector<int>> &T,int i,int j,int &count,vector<vector<int>> &A){
    T[i][j]=1;
    count+=1;
    int pos[8][2]={{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1},{1,-1},{1,1}};
    for(int i=0;i<8;i++){
        int x=i+pos[i][0];
        int y=i+pos[i][1];
        if(x>=0 && x<T.size() && y>=0 && y<T[0].size() && A[x][y]==1 && T[x][y]==0)
        {
            dfs(T,x,y,count,A);
        }
        
    }
    return;
    
}
int Solution::solve(vector<vector<int> > &A) {
    int m=A.size();
    int n=A[0].size();
    vector<vector<int>> T(m,vector<int>(n,0));
    int ma=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {  int count=0;
            if(T[i][j]==0 && A[i][j]==1)
            dfs(T,i,j,count,A);
            
            ma=max(ma,count);
            
        }
    }
    return ma;
}
