class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int x : nums){
            freq[x]++;
        }
        int c{};
        for(auto& it: freq){
            while(it.second % 3 != 0){
                if(it.second <= 1) return -1;
                it.second -= 2;
                c++;
            }
            c += it.second/3;
        }
        return c;
    }
};