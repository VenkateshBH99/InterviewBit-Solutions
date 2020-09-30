vector<vector<int> > Solution::solve(int A) {
    vector<vector<int>> v;
    if(A==0) return v;
    vector<int> tmp{1};
    v.push_back(tmp);
    for(int i=2;i<=A;i++)
    {
        vector<int> tmp1{1};
        if(i>2)
        for(int j=0;j<(i-2);j++){
            int n=v.size()-1;
            int a=v[n][j]+v[n][j+1];
            tmp1.push_back(a);
        }
        tmp1.push_back(1);
        v.push_back(tmp1);
    }
    return v;
}