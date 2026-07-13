class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void backtrack(vector<int>&c, int t, int s, int idx){
        if(s == t){ans.push_back(temp); return;}
        if(s > t) return;
        for(int i=idx; i<c.size(); i++){
            if(i>idx && c[i] == c[i-1]) continue;
            temp.push_back(c[i]);
            backtrack(c, t, s+=c[i], i+1);
            s-=c[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        sort(c.begin(), c.end());
        backtrack(c, t, 0, 0);
        return ans;
    }
};