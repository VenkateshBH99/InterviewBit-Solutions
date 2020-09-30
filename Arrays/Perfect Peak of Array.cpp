int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    left[0]=A[0];
    for(int i=1;i<n;i++)
    left[i]=max(A[i],left[i-1]);
    
    right[n-1]=A[n-1];
    for(int i=n-2;i>-1;i--)
    right[i]=min(A[i],right[i+1]);
    
    for(int i=1;i<n-1;i++)
    if(left[i-1]<A[i] && A[i]<right[i+1]) return 1;
    
    return 0;
}
