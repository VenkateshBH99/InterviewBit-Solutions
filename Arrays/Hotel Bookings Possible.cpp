bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    vector<vector<int>> arr;
     sort(arrive.begin(),arrive.end());
     sort(depart.begin(),depart.end());
     int count=0;
     int ma=0;
     int i=0,j=0;
     while(i<arrive.size() && j<depart.size())
     {
         if(arrive[i]<depart[j])
         {
             i++;
             count++;
             ma=max(ma,count);
             if(ma>K) return false;
         }
         else {
             j++;
             count--;
         }
     }
     return true;
     
}