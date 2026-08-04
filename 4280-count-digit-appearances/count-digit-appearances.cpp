class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int d) {
        int n = nums.size(), c{};
        for(size_t i=0; i<n; i++){
            string s = to_string(nums[i]);
            for(char ch : s){
                if(ch-'0' == d) c++;
            }
        }
        return c;
    }
};