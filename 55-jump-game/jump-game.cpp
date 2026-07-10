class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int mxr{};
        for(int i=0; i<n; i++){
            if(i > mxr) return false;
            mxr = max(mxr, i + nums[i]);
            if(mxr >= n-1) break;
        }
        return true;
    }
};