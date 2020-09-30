int Solution::solve(vector<int> &A) {
    int ma=A[0];
    int mi=A[0];
    for(int i=1;i<A.size();i++)
    {
        ma=max(ma,A[i]);
        mi=min(mi,A[i]);
    }
    return ma+mi;
}
