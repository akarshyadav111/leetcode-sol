class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> mx(n), pg(n);
        mx[0] = nums[0];
        pg[0] = nums[0];
        for(int i=1; i<n; i++){
            mx[i] = max(mx[i-1], nums[i]);
            pg[i] = gcd(nums[i], mx[i]);
        }
        sort(pg.begin(), pg.end());
        long long s{};
        int l=0, r=n-1;
        while(l<r){
            s += gcd(pg[l], pg[r]);
            l++;
            r--;
        }
        return s;
    }
};