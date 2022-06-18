// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++
class Solution {
    
    void helper(vector<vector<int>> &matrix,int i,int j, int xd, int yd,int ans,vector<int> &ans_v){
        
        
        if(i<0 || j<0 || i >= matrix.size() || j>= matrix[0].size() || matrix[i][j] == 0) return;
        else if(i == xd && j == yd){
            ans_v.push_back(ans);
            return;
        }
        else{
            matrix[i][j] = 0;
            
            helper(matrix,i+1,j,xd,yd,ans+1,ans_v);
            helper(matrix,i,j-1,xd,yd,ans+1,ans_v);
            helper(matrix,i,j+1,xd,yd,ans+1,ans_v);
            helper(matrix,i-1,j,xd,yd,ans+1,ans_v);
            
            matrix[i][j] = 1;
        }
    }
    
public:
    int longestPath(vector<vector<int>> &matrix, int xs, int ys, int xd, int yd)
    {
        vector<int> ans{-1};
        helper(matrix,xs,ys,xd,yd,0,ans);
        return *max_element(ans.begin(),ans.end());
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends