class Solution {
public:
    
    int helper(int i, int j, int n, int m, vector<vector<int>>&grid, vector<vector<int>>&dp){
        if(dp[i][j]!=-1) return dp[i][j];
        long long ans = 0;        
        if(i > 0 && grid[i-1][j] > grid[i][j]) ans += 1 + helper(i-1, j, n, m, grid, dp);
        if(i < n-1 && grid[i+1][j] > grid[i][j]) ans += 1 + helper(i+1, j, n, m, grid, dp);
        if(j > 0 && grid[i][j-1] > grid[i][j]) ans += 1 + helper(i, j-1, n, m, grid, dp);
        if(j < m-1 && grid[i][j+1] > grid[i][j]) ans += 1 + helper(i, j+1, n, m, grid, dp);
        return dp[i][j] = (ans)%1000000007;
    }
    
    int countPaths(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size(), ans = n*m;
        vector<vector<int>>dp(n, vector<int>(m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = (ans + helper(i, j, n, m, grid, dp))%1000000007;
            }
        }
        return ans;
    }
};