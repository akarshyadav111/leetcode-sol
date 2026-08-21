class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        for(int i=0; i<n; i++){
            temp.push_back(nums[i]);
        }
        for(int i=n-1; i>=0; i--){
            temp.push_back(nums[i]);
        }
        return temp;
    }
};