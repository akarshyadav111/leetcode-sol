class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxi{}, maxd{};
        for(size_t i=1; i<n; i++){
            int dec{};
            for(size_t j=i; j<n; j++){
                if(nums[j]<nums[j-1]) dec++;
                else break;
            }
            maxd = max(dec, maxd);
        }
        for(size_t i=1; i<n; i++){
            int inc{};
            for(size_t j=i; j<n; j++){
                if(nums[j]>nums[j-1]) inc++;
                else break;
            }
            maxi = max(inc, maxi);
        }
        if(max(maxi, maxd) == 0) return 1;
        return max(maxi, maxd) + 1;
    }
};