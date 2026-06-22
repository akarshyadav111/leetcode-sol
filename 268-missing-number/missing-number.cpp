class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==1 && nums[0]==0) return 1;
        set<int> s;
        bool f = false;
        for(int n : nums){
            if(n==0) f = true;
            s.insert(n);
        }
        if(!f){
            return 0;
        }
        int x = 0;
        for(int n : s){
            nums[x++] = n;
        }
        for(int i=1; i<nums.size(); i++){
            if(nums[i]-nums[i-1]==2){
                return nums[i]-1;
            }
        }
        return nums[nums.size()-1]+1;
    }
};