class Solution {
public:
    
    void dfs(int i, int ind, vector<int>&vis, map<int,int>&mp, vector<int>&edges){
        vis[i] = 1;
        mp[i] = ind+1;
        if(edges[i]!=-1 && !vis[edges[i]]) dfs(edges[i], ind+1, vis, mp, edges);
    }
    void dfs2(int i, int ind, int &ans, int &curr, vector<int>&vis, map<int,int>&mp, vector<int>&edges){
        vis[i] = 1;
        if(mp[i] > 0) {
            if(max(mp[i]-1, ind) < curr) {
                ans = i;
                curr = max(mp[i]-1, ind);
            }
            else if(max(mp[i]-1, ind) == curr) ans = min(ans, i);
        }
        if(edges[i]!=-1 && !vis[edges[i]]) dfs2(edges[i], ind+1, ans, curr, vis, mp, edges);
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int n = edges.size();
        vector<int>vis(n,0);
        map<int,int>mp;
        dfs(node1, 0, vis, mp, edges);
        for(int i=0;i<n;i++) vis[i] = 0;
        // for(auto i:mp) cout<<i.first<<" "<<i.second<<"\n";
        int ans = -1, curr = 100005, t;        
        dfs2(node2, 0, ans, curr, vis, mp, edges);
        return ans;
    }
};
