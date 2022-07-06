// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
  
  
    bool helper(int ind, vector<int> adj[], vector<int>&vis){
        vis[ind] = 1;
        queue<pair<int, int>>q;
        q.push({ind, -1});
        while(q.size()){
            int node = q.front().first;
            int par = q.front().second;
            vis[node] = 1;
            q.pop();
            for(auto i:adj[node]){
                if(!vis[i]) q.push({i, node});
                else if(i != par) return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int n, vector<int> adj[]) {
        vector<int>vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(helper(i, adj, vis)) return true;
            }
        }
        return false;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends