// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int n, vector<int> adj[]) {
        vector<int>vis(n,0);
        vector<int>ans;
        int i = 0;
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            vis[i] = 1;
            while(q.size()){
                for(int j=0; j<adj[q.front()].size(); j++){
                    if(!vis[adj[q.front()][j]]){
                        q.push(adj[q.front()][j]);
                        vis[adj[q.front()][j]] = 1;
                    }                        
                }
                ans.push_back(q.front());
                q.pop();
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends