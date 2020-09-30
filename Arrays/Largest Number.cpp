int comp(string X,string Y)
{
    string XY=X.append(Y);
    string YX=Y.append(X);
    
    return XY.compare(YX)>0? 1:0;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> res;
    for(int i=0;i<A.size();i++)
    {
        res.push_back(to_string(A[i]));
    }
    sort(res.begin(),res.end(),comp);
    string ans="";
    for(int i=0;i<res.size();i++)
    {
        ans+=res[i];
    }
    int i=0;
    while(ans[i]=='0')
    {
        i++;
        
    }
    if(i==ans.length()) ans='0';
    return ans;
    
}