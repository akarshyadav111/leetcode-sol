class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> nums;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                nums.push_back(grid[i][j]);
            }
        }
        int o = nums.size();
        vector<int> ans(o, 1);
        long long left = 1;
        for (int i = 0; i < o; i++) {
            ans[i] = left;
            left = (left * nums[i]) % 12345;
        }
        long long right = 1;
        for (int i = o - 1; i >= 0; i--) {
            ans[i] =  (ans[i] * right) % 12345;
            right = (right * nums[i]) % 12345;
        }
        int x=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                grid[i][j] = ans[x] % 12345;
                x++;
            }
        }
        return grid;
    }
};