vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>> B(A,vector<int> (A,0));
    int count=1;
    int l=0,r=A-1,t=0,b=A-1;
    while(l<=r && t<=b)
    {
        // cout<<l<<endl;
        for(int i=l;i<=r;i++)
        B[t][i]=count++;
        
        t++;
        if(t>b) break;
        
        // cout<<t<<endl;
        for(int i=t;i<=b;i++)
        B[i][r]=count++;
        
        r--;
        if(r<l) break;
        
        // cout<<r<<endl;
        for(int i=r;i>=l;i--)
        B[b][i]=count++;
        
        b--;
        if(b<t) break;
        
        // cout<<b<<endl;
        for(int i=b;i>=t;i--)
        B[i][l]=count++;
        
        l++;
    }
    return B;
}