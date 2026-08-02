class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int s{}, c{};
        for(int x : nums) s += x;
        while(s>=0){
            if(s%k == 0) break;
            s--;
            c++;
        }
        return c;
    }
};