// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:

    bool dfs(int ind, int parentColor, vector<int>&color, vector<int>&vis, vector<int>adj[] ){
        vis[ind] = 1;
        if(color[ind] != 0 && color[ind] != -1*parentColor) return false;
        color[ind] = -1*parentColor;
        parentColor = color[ind];
        for(int i=0;i<adj[ind].size();i++){
            if(color[adj[ind][i]] != 0 && color[adj[ind][i]] != -1*parentColor) return false;
            if(!vis[adj[ind][i]]) if(!dfs(adj[ind][i], parentColor, color, vis, adj)) return false;
        }
        return true;
    }
    
	bool isBipartite(int n, vector<int>adj[]){
	    vector<int>color(n,0);
	    vector<int> vis(n,0);
	    int par = 1;
	    for(int i=0;i<n;i++){
	        if(!vis[i]) if(!dfs(i, par, color, vis, adj)) return false;
	    }
	    return true;
	}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}  // } Driver Code Ends