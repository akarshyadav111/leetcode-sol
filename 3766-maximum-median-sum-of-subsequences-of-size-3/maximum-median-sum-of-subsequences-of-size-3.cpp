class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=nums.size()-2;
        long long s{};
        if(nums.size()==3) return nums[1];
        while(i>=nums.size()/3){
            s+=nums[i];
            i-=2;
        }
        return s;
    }
};