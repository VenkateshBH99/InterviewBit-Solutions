int Solution::solve(vector<int> &A) {
    int n=A.size();
   sort(A.begin(),A.end());
   int l=0;
   int h=A.size();
//   cout<<"k"<<endl;
    if(A[A.size()-1]==0) return 1;
   for(int i=0;i<A.size();i++)
   {
    //   cout<<A[i]<<" ";
    
       while(i<A.size() && A[i]==A[i+1])
       {
           i++;
       }
    //   cout<<h-i<<endl;
       if((h-i-1)==A[i]) return 1;
   }
   return -1;
}