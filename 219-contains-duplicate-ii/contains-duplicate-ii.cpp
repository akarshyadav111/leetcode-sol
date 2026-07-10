class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            freq[nums[right]]++;
            if(freq[nums[right]] > 1) return true;
            if(right - left + 1 > k){
                freq[nums[left]]--;
                left++;
            }
        }
        return false;
    }
};