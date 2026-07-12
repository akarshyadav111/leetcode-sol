class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(int n, int index, int k){
        if(temp.size()==k){ ans.push_back(temp); return;}
        for(int i=index; i<=n; i++){
            temp.push_back(i);
            backtrack(n, i+1, k);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        backtrack(n, 1, k);
        return ans;
    }
};