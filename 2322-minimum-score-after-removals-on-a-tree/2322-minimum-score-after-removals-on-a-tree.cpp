class Solution {
public:
    int helper(int curr, vector<int>&vis, vector<int>adj[],vector<int>&nums){
        int ans = nums[curr];
        vis[curr] = 1;
        for(auto i:adj[curr]) if(!vis[i]) ans ^= helper(i, vis, adj, nums);
        return ans;
    }
    
    int comp(int ind, int par, int a, int &c, int &ans, vector<int>&vis, vector<int>adj[], vector<int>&nums){
        vis[ind] = 1;
        int temp = 0;
        for(auto i:adj[ind]) if(!vis[i]) temp ^= comp(i, par, a, c, ans, vis, adj, nums);
        if(ind == par) return 0;
        temp ^= nums[ind];
        ans = min(ans, max({a^temp,c,temp}) - min({a^temp,c,temp}));
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
            for(int i=0;i<n;i++) vis[i] = 0;
            vis[i[1]] = 1;
            if(adj[i[0]].size() > 1) comp(i[0], i[0], xora, xorb, ans, vis, adj, nums);
            for(int i=0;i<n;i++) vis[i] = 0;
            vis[i[0]] = 1;
            if(adj[i[1]].size() > 1) comp(i[1], i[1], xorb, xora, ans, vis, adj, nums);

        }
        return ans;
    }
};