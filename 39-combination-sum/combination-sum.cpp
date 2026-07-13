class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(vector<int>&c, int t, int s, int idx){
        if(s > t) return;
        if(s == t){ans.push_back(temp); return;}
        for(int i=idx; i<c.size(); i++){
            temp.push_back(c[i]);
            backtrack(c, t, s+=c[i], i);
            s-=c[i];
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        backtrack(c, t, 0, 0);
        return ans;
    }
};