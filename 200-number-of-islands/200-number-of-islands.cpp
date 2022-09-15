class Solution {
public:
    
    void dfs(int i, int j, int n, int m, vector<vector<int>>&vis, vector<vector<char>>& grid){
        vis[i][j] = 1;
        if(i > 0 && vis[i-1][j] == 0 && grid[i-1][j] == '1') dfs(i-1,j,n,m,vis,grid);
        if(i < n-1 && vis[i+1][j] == 0 && grid[i+1][j] == '1') dfs(i+1,j,n,m,vis,grid); 
        if(j < m-1 && vis[i][j+1] == 0 && grid[i][j+1] == '1') dfs(i,j+1,n,m,vis,grid);
        if(j > 0 && vis[i][j-1] == 0 && grid[i][j-1] == '1') dfs(i,j-1,n,m,vis,grid); 
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size(), m = grid[0].size(), cnt = 0;
        vector<vector<int>>vis(n, vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j = 0;j<m; j++){
                if(grid[i][j] == '1' && vis[i][j] == 0){
                    cnt++;
                    dfs(i, j, n, m, vis, grid);
                }
            }
        }
        return cnt;
    }
};