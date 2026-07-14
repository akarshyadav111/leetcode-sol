class Solution {
public:
    int maxDistance(vector<vector<int>>& a) {
        int maxi=a[0][a[0].size()-1], mini=a[0][0];
        int maxd{};
        for(int i=1; i<a.size(); i++){
            maxd = max(maxd, maxi-a[i][0]);
            maxd = max(maxd, a[i][a[i].size()-1]-mini);
            mini = min(mini, a[i][0]);
            maxi = max(maxi, a[i][a[i].size()-1]);
        }
        return maxd;
    }
};