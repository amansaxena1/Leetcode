class Solution {
public:
    
    void dfs(int i, int j, int n, int m, bool &flag, vector<vector<int>>&vis, vector<vector<int>>&grid, vector<vector<int>>&grid1){
        vis[i][j] = 1;
        if(grid[i][j] == 1 && grid1[i][j] == 0) flag = false;
        if(i > 0 && vis[i-1][j] == 0 && grid[i-1][j] == 1) dfs(i-1,j,n,m,flag,vis,grid,grid1);
        if(i < n-1 && vis[i+1][j] == 0 && grid[i+1][j] == 1) dfs(i+1,j,n,m,flag,vis,grid,grid1); 
        if(j < m-1 && vis[i][j+1] == 0 && grid[i][j+1] == 1) dfs(i,j+1,n,m,flag,vis,grid,grid1);
        if(j > 0 && vis[i][j-1] == 0 && grid[i][j-1] == 1) dfs(i,j-1,n,m,flag,vis,grid,grid1); 
    }
    
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n = grid1.size(), m = grid1[0].size(), cnt = 0;
        vector<vector<int>>vis(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j = 0;j<m; j++){
                if(grid2[i][j] == 1 && vis[i][j] == 0){
                    bool flag = true;
                    dfs(i, j, n, m, flag, vis, grid2, grid1);
                    if(flag) cnt++;
                }
            }
        }
        return cnt;
    }
};