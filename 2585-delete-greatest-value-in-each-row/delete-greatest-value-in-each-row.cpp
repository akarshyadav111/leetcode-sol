class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& g) {
        int n = g.size();
        int m = g[0].size();
        for(int i=0; i<n; i++){
            sort(g[i].begin(), g[i].end());
        }
        int s{};
        for(int i=0; i<m; i++){
            int m{};
            for(int j=0; j<n; j++){
                m = max(g[j][i], m);
            }
            s += m;
        }
        return s;
    }
};