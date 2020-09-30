int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
   int i=0,j=A.size()-1,flag=false;
   while(A[i]!=A[j])
   {
       if(i>j)
       {
           if(flag) return -1;
           flag=true;
           i=0;
           j=A.size()-1;
       }
       if(!flag) i++;
       else j++;
   }
   return A[i];
}