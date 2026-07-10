class Solution {
public:
    int jump(vector<int>& nums) {
        int j={}, cend{}, f{};
        for(int i=0; i<nums.size()-1; i++){
            f = max(f, i + nums[i]);
            if(i == cend){
                cend = f;
                j++;
            }
        }
        return j;
    }
};