class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> v;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i+=2){
            int a = nums[i];
            int b = nums[i+1];
            v.push_back(b);
            v.push_back(a);
        }
        return v;
    }
};