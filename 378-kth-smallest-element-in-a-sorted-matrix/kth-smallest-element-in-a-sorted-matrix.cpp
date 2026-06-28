class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // multiset<int> x;
        // int count{}, temp{};
        // for(int i=0; i<matrix.size(); i++){
        //     for(int j=0; j<matrix[i].size(); j++){
        //         // x.insert(matrix[i][j]);
        //         if(i!=matrix.size()-1 && j==matrix[i].size()-1 && matrix[i][j] > matrix[i+1][0]){
        //             swap(matrix[i][j], matrix[i+1][0]);
        //         }
        //         if(j<matrix[i].size()-1 && matrix[i][j] > matrix[i][j+1]) swap(matrix[i][j], matrix[i][j+1]);
        //         if(count==k) break;
        //         temp = matrix[i][j];
        //         count++;
        //     }
        // }
        // // for(int n : x ){
        // //     if(count == k) break;
        // //     temp = n;
        // //     count++;
        // // }
        // return temp;

        int n = matrix.size();
        int l = matrix[0][0], h = matrix[n-1][n-1];
        while(l < h){
            int m = l + (h - l) / 2;
            int count = 0;
            int i = n - 1;
            int j = 0;
            while( i >= 0 && j <n ){
                if(matrix[i][j] <= m){
                    count += i + 1;
                    j++;
                }else{
                    i--;
                }
            }
            if(count < k) l = m + 1;
            else h = m;
        }
        return l;
    }
};