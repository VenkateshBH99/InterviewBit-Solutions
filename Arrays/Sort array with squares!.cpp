vector<int> Solution::solve(vector<int> &A) {
    int ind=-1;
    for(int i=0;i<A.size();i++)
    {
        if(A[i]<0) ind=i;
        else break;
    }
    vector<int> ans;
    int l=ind,h=ind+1;
    while(l>=0 && h<A.size())
    {
        if(abs(A[l])<A[h])
        {
            ans.push_back(A[l]*A[l]);
            l--;
        }
        else
        {
            ans.push_back(A[h]*A[h]);
            h++;
        }
    }
    while(l>=0)
    {
        ans.push_back(A[l]*A[l]);
        l--;
    }
    while(h<A.size())
    {
        ans.push_back(A[h]*A[h]);
        h++;
    }
    return ans;
}
