void bfs(vector<vector<int>> &T,queue<pair<int,int>> &que,vector<vector<int> > &A)
{
    int pos[4][2]={{-1,0},{0,-1},{1,0},{0,1}};
    int n=A.size();
    int m=A[0].size();
    while(!que.empty())
    {
        pair<int,int> s=que.front();que.pop();
        if(T[s.first][s.second]) continue;
        T[s.first][s.second]=1;
        for(int i=0;i<4;i++)
        {
            int x=s.first+pos[i][0];
            int y=s.second+pos[i][1];
            if(x>=0 && x<n && y>=0 && y<m && T[x][y]==0)
            {
                if(A[s.first][s.second]<=A[x][y])
                {
                    que.push({x,y});
                }
            }
        }
    }
}
int Solution::solve(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    vector<vector<int>> T(n,vector<int>(m,0));
    vector<vector<int>> T1(n,vector<int>(m,0));
    queue<pair<int,int>> que;
    for(int i=0;i<n;i++)
    {
        
        que.push({i,0});
            
    }
    for(int i=0;i<m;i++)
    {
        que.push({0,i});
    }
    bfs(T,que,A);
    
    queue<pair<int,int>> que1;
    for(int i=0;i<n;i++)
    {
        
        que1.push({i,m-1});
            
    }
    for(int i=0;i<m;i++)
    {
        
            
        que1.push({n-1,i});
           
    }
    bfs(T1,que1,A);
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            
            if(T[i][j] && T1[i][j]) count++;
        }
    }
    return count;
}
