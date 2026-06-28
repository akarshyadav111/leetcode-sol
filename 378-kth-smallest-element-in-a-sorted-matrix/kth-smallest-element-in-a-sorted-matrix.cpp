class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        multiset<int> x;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                x.insert(matrix[i][j]);
            }
        }
        int count{}, temp{};
        for(int n : x ){
            if(count == k) break;
            temp = n;
            count++;
        }
        return temp;
    }
};