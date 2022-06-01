// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod, vector<int>&v)
    {
        if (n == 0) return;
        towerOfHanoi(n - 1, from_rod, aux_rod, to_rod, v);
        v.push_back(from_rod - 'A' + 1);
        v.push_back(to_rod - 'A' + 1);
        towerOfHanoi(n - 1, aux_rod, to_rod, from_rod, v);
    }
    
    vector<int> shiftPile(int N, int n){
        vector<int>v;
        towerOfHanoi(N, 'A', 'C', 'B', v);
        return {v[2*(n-1)], v[2*(n-1) + 1]};
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, n;
        cin>>N>>n;
        
        Solution ob;
        vector<int> ans = ob.shiftPile(N, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends