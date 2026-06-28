class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int l = 1, h = nums.size()-1;
        while(l<h){
            int m = l + ( h - l ) / 2;
            int count = 0;
            for(int x : nums){
                if(x <= m) count++;
            }
            if(count > m) h = m;
            else l = m + 1;
        }
        return l;
    }
};