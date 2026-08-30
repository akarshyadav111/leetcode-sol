class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini=INT_MAX, maxi=INT_MIN, minidx{}, maxidx{};
        for(int i=0; i<n; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
                maxidx = i;
            }
            if(nums[i] < mini){
                mini = nums[i];
                minidx = i;
            }
        }
        int minf=minidx, minb=n-minidx-1, maxf=maxidx, maxb=n-maxidx-1;
        int minimum = min(max(minf, maxf), max(minb, maxb)) + 1;
        minimum = min(minimum, minf+maxb+2);
        minimum = min(minimum, maxf+minb+2);
        return minimum;
    }
};