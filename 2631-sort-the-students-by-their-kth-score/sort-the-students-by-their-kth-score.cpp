class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& s, int k) {
        int n = s.size(), m = s[0].size();
        for(size_t i=0; i<n-1; i++){
            for(size_t j=0; j<n-i-1; j++){
                if(s[j][k] < s[j+1][k]){
                    for(size_t l=0; l<m; l++){
                        swap(s[j][l], s[j+1][l]);
                    }
                }
            }
        }
        return s;
    }
};