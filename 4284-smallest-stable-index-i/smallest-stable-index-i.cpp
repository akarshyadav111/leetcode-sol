class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(size_t i=0; i<n; i++){
            int mini = INT_MAX;
            for(size_t j=i; j<n; j++){
                mini = min(nums[j], mini);
            }
            for(size_t j=0; j<=i; j++){
                maxi = max(nums[j], maxi);
            }
            if((maxi - mini) <= k) return i;
        }
        return -1;
    }
};