int Solution::solve(vector<int> &A) {
    int n=A.size(), e=0,o=0,ans=0;
    if(n==0) return 0;
    if(n==1) return 1;
    
    for(int i=0; i<n; i+=2) e+=A[i];
    for(int i=1; i<n; i+=2) o+=A[i];
    
    e-=A[0];
    if(e==o) ans++;
    for(int i=1; i<n; i++){
        if(i%2){
            o-=A[i];
            o+=A[i-1];
        }
        else{
            e-=A[i];
            e+=A[i-1];
        }
        
        if(e==o) ans++;
    }
    
    
    
    return ans;
    
}
