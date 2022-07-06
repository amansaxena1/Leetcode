// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void helper(int ind, int dc, int cnt, int &ans, vector<int> adj[]){
        if(dc > 6){
            dc = 0;
            cnt++;
        }
        if(cnt>ans) return;
        if(ind == 30) ans = min(ans, cnt+1);
        for(auto i:adj[ind]){
            if(i == ind+1) helper(i, dc+1, cnt, ans, adj);
            else helper(i, 0, cnt+1, ans, adj);
        }
    }
    
    int minThrow(int n, int arr[]){
        
        vector<int> adj[31];
        for(int i=1;i<30;i++) adj[i].push_back(i+1);
        for(int i=0;i<2*n;i+=2) adj[arr[i]].push_back(arr[i+1]);
        
        int ans = INT_MAX;
        helper(1, 0, 0, ans, adj);
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[2*N];
        for(int i = 0;i < 2*N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.minThrow(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends