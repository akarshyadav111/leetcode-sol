class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int l=0;
        int maxi{}, mask{};
        int n = nums.size();
        for(int r=0; r<n; r++){
            while(nums[r] & mask){
                mask^=nums[l];
                l++;
            }
            mask|=nums[r];
            maxi = max(maxi, r-l+1);
        }       
        return maxi;
    }
};