class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxim{};
        for(int x : nums){
            freq[x]++;
            maxim = max(maxim, x);
        }
        int maxi{};
        int c=1;
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i] == nums[i+1] && nums[i] == maxim){c++; maxi = max(maxi, c);}
            else c=1;
        }
        return maxi == 0 ? 1 : maxi;
    }
};