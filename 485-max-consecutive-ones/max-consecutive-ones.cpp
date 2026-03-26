class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int start = 0;
        int max = 0, count = 0;
        while(start<nums.size()){
            if(nums[start]!=1){
                if(max<count) max = count;
                count = 0;
            }else{
                count++;
            }
            start++;
        }
        if(max<count) max = count;        
        return max;
    }
};