int Solution::fibsum(int A) {
    vector<int> fibo;
    fibo.push_back(1);fibo.push_back(1);
    for(int i=2;fibo[i-1]<A;i++){
        int val=fibo[i-1]+fibo[i-2];
        fibo.push_back(val);
    }
    int ans=0;
    int sz=fibo.size();
    sz--;
    while(A>0){
        while(fibo[sz]>A){
            sz--;
        }
        A=A-fibo[sz];
        ans++;
    }
    return ans;
}

