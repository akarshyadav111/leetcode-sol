class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0,left = 0, minCount = INT_MAX;
        for(int right=0; right<nums.size(); right++){
            sum += nums[right];
            while(sum >= target){
                minCount = min(minCount, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        if(minCount == INT_MAX) return 0;
        else return minCount;
    }
};