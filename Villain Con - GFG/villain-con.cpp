// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

#define llint long long int
class Solution{
    
public:

    void dfs(vector<vector<llint>>&adj, vector<llint>&vis, vector<llint>&ans, llint ind){
        llint maxi = 1;
        vis[ind] = 1;
        for(llint i=0;i<adj[ind].size();i++){
            if(!vis[adj[ind][i]]) dfs(adj, vis, ans, adj[ind][i]);
            maxi = max(maxi, 1 + ans[adj[ind][i]]);
        }
        ans[ind] = max(maxi, ans[ind]);
    }

    int minColour(int n, int M, vector<int> mat[]) {
        vector<vector<llint>>adj(n+1);
        vector<llint>vis(n+1,0);
        for(llint i = 0; i<M; i++) adj[mat[i][1]].push_back(mat[i][0]);
        
        // for(llint i=0;i<adj.size();i++){
        //     cout<<i<<"-";
        //     for(auto j:adj[i]) cout<<j<<" ";
        //     cout<<"\n";
        // }
        
        vector<llint>ans(n+1,0);
        for(llint i=1;i<n+1;i++){
            if(!vis[i]){
                dfs(adj, vis, ans, i);
            }
        }
        // for(auto i:ans) cout<<i<<" ";
        // cout<<"\n";
        return (int)(*max_element(ans.begin(),ans.end()));
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, x, y;
        cin>>N>>M;
        vector<int> mat[M];
        for(int i = 0;i < M;i++){
            cin>>x>>y;
            mat[i].push_back(x);
            mat[i].push_back(y);
        }
        
        Solution ob;
        cout<<ob.minColour(N, M, mat)<<"\n";
    }
    return 0;
}  // } Driver Code Ends