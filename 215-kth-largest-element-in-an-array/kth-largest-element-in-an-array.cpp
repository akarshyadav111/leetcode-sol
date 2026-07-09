class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        multiset<int> s;
        for(int i=0; i<nums.size(); i++){
            s.insert(nums[i]);
        }
        int c{};
        for(int x : s){
            if(c == nums.size() - k) return x;
            c++;
        }
        return 0;
    }
};