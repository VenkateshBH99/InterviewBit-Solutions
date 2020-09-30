vector<int> Solution::getRow(int A) {
    vector<int> k(A+1,0);
    vector<int> prev=k;
    k[0]=1;
    if(A==0)
    return k;
    
    prev=k;
    for(int i=1;i<=A;i++)
    {
        for(int j=1;j<i;j++)
        {
            k[j]=prev[j-1]+k[j];
            // cout<<k[j]<<endl;
        }
        k[i]=1;
        prev=k;
        // cout<<"-------------"<<endl;
    }
    return k;
}