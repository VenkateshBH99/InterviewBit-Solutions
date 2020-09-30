struct node{
    string word;
    int len;
};
bool adjacent(string s,string t){
    int c=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]) c++;
    }
    if(c>1) return false;
    return true;
}

int bfs(string &start,string &end,set<string> &dict){
    queue<node> q;
    node first;
    first.word=start;
    first.len=1;
    q.push(first);
    while(!q.empty()){
        node cur=q.front(); q.pop();
        set <string>::iterator it;
        for(it=dict.begin();it!=dict.end();it++){
            string temp=*it;
            if(adjacent(cur.word,temp)){
                first.word=temp;
                first.len=cur.len+1;
                q.push(first);
                dict.erase(temp);
                if(temp==end) return first.len;
            }
        }
    }
    return 0;
}


int Solution::ladderLength(string start, string end, vector<string> &dictV) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(start==end) return 1;
    set<string> dict;
    for(int i=0;i<dictV.size();i++){
        string x=dictV[i];
        dict.insert(x);
    }
    return bfs(start,end,dict);
}
