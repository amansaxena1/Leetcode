class Solution {
public:
    
    void dfs(int ind, long long &cnt, vector<int>&vis, vector<int>adj[]){
        vis[ind]=1;
        cnt++;
        for(auto i:adj[ind]){
            if(!vis[i]) dfs(i, cnt, vis, adj);
        }
    }
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int>adj[n];
        for(auto i:edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        long long ans = (long long)n*(n+1)/2;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                long long cnt = 0;
                dfs(i, cnt, vis, adj);
                ans -= cnt*(cnt+1)/2;
            }
        }
        return ans;
    }
};