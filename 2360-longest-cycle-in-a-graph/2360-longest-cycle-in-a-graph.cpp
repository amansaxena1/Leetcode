class Solution {
public:
    
    int dfs(int i, int ind, vector<int>&temp, vector<int>&vis, vector<int>& edges){
        vis[i] = 1;
        int ans = -1;
        if(temp[i] == -1) temp[i] = ind;
        else ans = ind - temp[i];
        if(edges[i] != -1){
            if(!vis[edges[i]]) ans = max(ans, dfs(edges[i], ++ind, temp, vis, edges));
            else if(temp[edges[i]]!=-1) ans = max(ans, ind - temp[edges[i]] + 1);
        }
        temp[i] = -1;
        return ans;
    }
    int longestCycle(vector<int>& edges) {
        int n = edges.size();
        vector<int>vis(n, 0), temp(n, -1);
        int ans = -1;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans = max(ans, dfs(i, 1, temp, vis, edges));
            }
        }
        return ans;
    }
};