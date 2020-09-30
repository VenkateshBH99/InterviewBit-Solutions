int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
    queue<pair<int, int>> Q;
    vector<bool> visited(101, false);
    unordered_map<int, int> mp;
    for(auto i : A) {
        mp[i[0]] = i[1];
    }
    for(auto i : B) {
        mp[i[0]] = i[1];
    }
    Q.push({1, 0});
    visited[1] = true;
    while(!Q.empty()) {
        pair<int, int> currPair = Q.front();
        Q.pop();
        int currPos = currPair.first;
        int moves = currPair.second;
        if(currPos == 100) {
            return moves;
        }else {
            for(int i = 1; i <= 6; i++) {
                int nextPos = currPos + i;
                if(mp.find(nextPos) != mp.end()) {
                    nextPos=mp[nextPos];
                }
                if(nextPos <= 100 and visited[nextPos] == false) {
                    
                        Q.push({nextPos, moves + 1});
                        visited[nextPos] = true;
                    
                }
            }
        }
    }
    return -1;
}
