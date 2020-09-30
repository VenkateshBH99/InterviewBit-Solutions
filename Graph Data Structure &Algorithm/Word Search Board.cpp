vector<string> S;
string v;
bool ok;
int n,c;
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
void dfs(int i,int x,int y){
    if(ok) return;
    if(i==v.size()){
        ok=true;
        return;
    }
    for(int j=0;j<4;j++){
        int newx=x+dx[j];
        int newy=y+dy[j];
        if(newx>=n || newx<0|| newy>=c|| newy<0) continue;
        if(S[newx][newy]==v[i]) dfs(i+1,newx,newy);
    }
    
}

int Solution::exist(vector<string> &A, string B) {
    S=A;
    v=B;
    ok=false;
    n=A.size();
    c=A[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<c;j++){
            if(ok) break;
            else if(A[i][j]==v[0]) dfs(1,i,j);
        }
    }
    return ok;
    
}
