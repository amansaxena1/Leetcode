class Solution {
public:
    int helper(int curr, vector<int>&vis, vector<int>adj[],vector<int>&nums){
        int ans = nums[curr];
        vis[curr] = 1;
        for(auto i:adj[curr]){
            if(!vis[i]) ans ^= helper(i, vis, adj, nums);
        }
        return ans;
    }
    
    
    int comp(int ind, int par, int a, int &c, int &ans, vector<int>&vis, vector<int>adj[], vector<int>&nums){
        vis[ind] = 1;
        int temp = 0;
        for(auto i:adj[ind]){
            if(!vis[i]) temp ^= comp(i, par, a, c, ans, vis, adj, nums);
        }
        if(ind == par) return 0;
        temp ^= nums[ind];
        // a ^= curr;
        ans = min(ans, max({a^temp,c,temp}) - min({a^temp,c,temp}));
        // cout<<ind<<"===="<<ans<<"\n";
        return temp;
    }
    
    
    int minimumScore(vector<int>& nums, vector<vector<int>>& edges) {
        int n = nums.size();
        vector<int>adj[n];
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);            
        }
        int ans = INT_MAX;
        for(auto i:edges){
            vector<int>vis(n,0);
            vis[i[1]] = 1;
            int xora = helper(i[0], vis, adj, nums);
            for(int i=0;i<n;i++) vis[i] = 0;
            vis[i[0]] = 1;
            int xorb = helper(i[1], vis, adj, nums);
            // cout<<xora<<" "<<xorb<<"\n";
            for(int i=0;i<n;i++) vis[i] = 0;
            vis[i[1]] = 1;
            int curr = 0;
            if(adj[i[0]].size() > 1) curr = comp(i[0], i[0], xora, xorb, ans, vis, adj, nums);
            for(int i=0;i<n;i++) vis[i] = 0;
            vis[i[0]] = 1;
            curr = 0;
            if(adj[i[1]].size() > 1) curr = comp(i[1], i[1], xorb, xora, ans, vis, adj, nums);

        }
        return ans;
    }
};
// p q1 = 6^4, q2 = q^6^4
// n*(n + n + (n*1) + (1*n))
//         1
//         |\
//       3 0 2
//       | |  \
//       4 1   3
//         |    \
//         4     5
//         |      \
//         6       4
             
//              x
// 3
// |
// 4

// mp              mp
// 3               1
// 7               1
//                 3
             
//    7       3
// 1. 3 4     3
// 2. 7                    
