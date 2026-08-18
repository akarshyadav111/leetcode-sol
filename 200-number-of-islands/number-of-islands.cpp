class Solution {
public:
    void dfs(int& row, int& col, vector<vector<bool>>& vis, vector<vector<char>>& grid, int& n, int& m){
        int nrow{}, ncol{};
        vis[row][col] = true;
        int delrow[] = {-1, 0, 1, 0};
        int delcol[] = {0, 1, 0, -1};
        for(int i=0; i<4; i++){
            nrow = delrow[i] + row;
            ncol = delcol[i] + col;
            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && grid[nrow][ncol] == '1' && !vis[nrow][ncol]){
                dfs(nrow, ncol, vis, grid, n, m);
            }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        int c{};
        for(int row=0; row<n; row++){
            for(int col=0; col<m; col++){
                if(!vis[row][col] && grid[row][col] == '1'){
                    c++;
                    dfs(row, col, vis, grid, n, m);
                }
            }
        }
        return c;
    }
};