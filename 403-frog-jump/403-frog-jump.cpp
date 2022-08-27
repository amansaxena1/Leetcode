class Solution {
public:
    
    int helper(vector<int>& v, int ind, int jump, vector<vector<int>>&dp, unordered_map<int,int>&mp){
        if(ind == v.size()-1) return true;
        bool ans = 0;
        if(dp[ind][jump] != -1) return dp[ind][jump];
        if(jump + 1 < dp.size() && !ans && mp[v[ind] + jump + 1] > 0) ans = helper(v, mp[v[ind] + jump + 1], jump+1, dp, mp);        
        if(jump - 1 > 0 && ans == 0 && mp[v[ind] + jump - 1] > 0) ans = helper(v, mp[v[ind] + jump - 1], jump-1, dp, mp);
        if(jump > 0 && ans == 0 && mp[v[ind] + jump] > 0) ans = helper(v, mp[v[ind] + jump], jump, dp, mp);
        return dp[ind][jump] = ans;
    }
    
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map<int,int>mp;
        for(auto i=0;i<stones.size();i++) mp[stones[i]] = i;
        vector<vector<int>>dp(n,vector<int>(n,-1));
        bool ans = false;
        return helper(stones, 0, 0, dp, mp) == 1;
    }
    
    bool helper(int i, int j, vector<vector<int>>&t, vector<vector<int>>&dp){
        if(i == dp.size()) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        int a = 0;
        if(!a && j-1 > 0) a = helper(i+1, j, t, dp);
        if(!a) a = helper(i+1, j+1, t, dp);
        if(!a && j+1 < dp.size()) a = helper(i+2, j+1, t, dp);
        return dp[i][j] = a;
    }
    
    bool canCross(vector<int>& v, int m) {
        int n = v.size();
        vector<vector<int>>t;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j = i+1;j<n;j++){
                if(v[j] - v[i] <= i+1){
                    // if(mp[v[j] - v[i] - 1] > 0)
                }
            }
            // t.push_back(t);
        }
        for(auto i:t){
            for(int j:i){
                cout<<j<<" ";
            }
            cout<<"\n";
        }
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return helper(0, 0, t, dp) == 1;
        
//         int N = stones.length;
//         boolean[][] dp = new boolean[N][N + 1];
//         dp[0][1] = true;
        
//         for(int i = 1; i < N; ++i){
//             for(int j = 0; j < i; ++j){
//                 int diff = stones[i] - stones[j];
//                 if(diff < 0 || diff > N || !dp[j][diff]) continue;
//                 dp[i][diff] = true;
//                 if(diff - 1 >= 0) dp[i][diff - 1] = true;
//                 if(diff + 1 <= N) dp[i][diff + 1] = true;
//                 if(i == N - 1) return true;
//             }
//         }

//         return false;
    }
    
};