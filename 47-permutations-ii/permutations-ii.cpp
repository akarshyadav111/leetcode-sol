class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;
    
    void backtrack(vector<int>& nums, vector<bool>& used){
        if(temp.size() == nums.size()){ ans.push_back(temp); return;}
        for(int i=0; i<nums.size(); i++){
            if (used[i] == true) continue;
            if (i > 0 && nums[i] == nums[i-1] && used[i-1] == false) continue;
            used[i] = true;
            temp.push_back(nums[i]);
            backtrack(nums, used);
            used[i] = false;
            temp.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<bool> used(nums.size());
        backtrack(nums, used);
        return ans;
    }
};