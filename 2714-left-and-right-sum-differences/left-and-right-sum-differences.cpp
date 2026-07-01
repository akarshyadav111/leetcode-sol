class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> lsum(n), rsum(n);
        lsum[0] = 0;
        rsum[n-1] = 0;
        int i=0, j=n-1, x=1, y=n-2;
        while(i < n-1 && j > 0){
            lsum[x] = lsum[x-1] + nums[i++];
            rsum[y] = rsum[y+1] + nums[j--];
            x++;
            y--;
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++){
            ans[i] = abs(lsum[i] - rsum[i]);
        }
        return ans;
    }
};