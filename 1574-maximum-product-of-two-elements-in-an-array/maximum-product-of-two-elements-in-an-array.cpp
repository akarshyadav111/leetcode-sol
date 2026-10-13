class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxi{};
        int n = nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         if(i!=j){
        //             maxi = max((nums[i]-1) * (nums[j]-1), maxi);
        //         }
        //     }
        // }
        // return maxi;
        sort(nums.begin(), nums.end());
        return (nums[n-2]-1)*(nums[n-1]-1);
    }
};