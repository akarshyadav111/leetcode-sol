class Solution {
public:
    int countPaths(int i, int j, int n, int m, vector<vector<int>>& o, vector<vector<int>>& dp){
        if(i >= n || j>= m || o[i][j] != 0) return 0;
        if(i == n-1 && j == m-1) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = countPaths(i+1, j, n, m, o, dp) + countPaths(i, j+1, n, m, o, dp);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& o) {
        int n = o.size();
        int m = o[0].size();
        vector<vector<int>> dp(n+1, vector<int>(m, -1));
        return countPaths(0, 0, n, m, o, dp);
    }
};