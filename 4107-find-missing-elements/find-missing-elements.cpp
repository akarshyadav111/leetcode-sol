class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        int n = nums.size(), j=0;
        int mini=INT_MAX, maxi=INT_MIN;
        for(size_t i=0; i<n; i++){
            mini = min(mini, nums[i]);
            maxi = max(mini, nums[i]);
        }
        for(size_t i=mini; i<=maxi; i++){
            if(i==nums[j]) j++;
            else v.push_back(i);
        }
        return v;
    }
};