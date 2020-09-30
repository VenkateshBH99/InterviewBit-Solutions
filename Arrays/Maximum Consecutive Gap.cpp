int Solution::maximumGap(const vector<int> &A) {
     if(A.size()<2) return 0;
    vector<int> A1=A;
    sort(A1.begin(),A1.end());
    int diff=0;
    for(int i=1;i<A1.size();i++)
    {
        int curr=A1[i]-A1[i-1];
        if(curr>diff) diff=curr;
        
    }
    return diff;
}
