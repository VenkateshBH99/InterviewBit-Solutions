vector<int> Solution::flip(string A) {
    int curr_count=0;
    vector<int> ans;
    int l=-1,r=-1;
    int ltemp=0;
    int ma=0;
     for(int i=0;i<A.size();i++)
     {
         if(A[i]=='0') curr_count++;
         else curr_count--;
         if(curr_count>ma)
         {
             l=ltemp+1;
             r=i+1;
             ma=curr_count;
         }
         if(curr_count<0)
         {
             curr_count=0;
             ltemp=i+1;
         }
         
         
     }
     if(l!=-1)
     {
         ans.push_back(l);
         ans.push_back(r);
     }
    return ans;
    
}