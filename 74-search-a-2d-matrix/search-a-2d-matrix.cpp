class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        // int l = 0, h = m * n - 1;
        // while(l <= h){
        //     int m = l + (h - l)/2;
        //     // int i = n - 1;
        //     // int j = 0;
        //     // while( i >= 0 && j < mi ){
        //     //     if(matrix[i][j] < m){
        //     //         j++;
        //     //     }else{
        //     //         i++;
        //     //     }
        //     // }
        //     if(matrix[i][j] == target) return true;
        //     if(matrix[i][i] < target){
        //         l = m + 1;
        //     }else{
        //         h = m - 1;
        //     }
        // }
        int i = n - 1, j = 0;
        while(i>=0 && j<m){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) i--;
            else j++;
        }
        return false;
    }
};