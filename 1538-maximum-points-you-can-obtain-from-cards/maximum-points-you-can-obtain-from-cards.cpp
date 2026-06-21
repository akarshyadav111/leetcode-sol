class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        // if(nums.size() == k){
        //     int sum = 0;
        //     for(int n : nums){
        //         sum += n;
        //     }
        //     return sum;
        // }
        int maxsum = 0, lsum = 0, rsum = 0;
        for(int i=0; i<k; i++){
            lsum += nums[i];
        }
        maxsum = lsum;
        int r = nums.size()-1;
        for(int i=k-1; i>=0; i--){
            lsum-=nums[i];
            rsum+=nums[r--];
            maxsum = max(maxsum, lsum + rsum);
        }
        return maxsum;
    }
};