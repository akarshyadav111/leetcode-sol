class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    void backtrack(int k, int n, int idx, int s){
        if(s > n) return;
        if(temp.size() == k){ if(s == n ) ans.push_back(temp); return;}
        for(int i=idx; i<=9; i++){
            temp.push_back(i);
            backtrack(k, n, i+1, s+i);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(k, n, 1, 0);
        return ans;
    }
};