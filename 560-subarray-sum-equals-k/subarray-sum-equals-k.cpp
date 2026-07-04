class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // unordered_map<int, int> map;
        // map[0]++;
        // int count{};
        // vector<int> pref(nums.size());
        // pref[0] = nums[0];
        // map[pref[0]]++;
        // for(int i=1; i<nums.size(); i++){
        //     pref[i] = pref[i-1] + nums[i];
        //     int dif = pref[i] - k;
        //     if(map[dif] > 0){
        //         count += map[dif];
        //     }
        //     map[pref[i]]++;
        // }
        // return count;
        unordered_map<int, int> mp;
        mp[0] = 1;
        int prefix = 0;
        int count = 0;
        for (int num : nums) {
            prefix += num;
            count += mp[prefix - k];
            mp[prefix]++;
        }
        return count;
    }
};