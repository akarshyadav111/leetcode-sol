class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(size_t i=0; i<n; i++){
            int sum = 0;
            int number = nums[i];
            while(number){
                sum += number % 10;
                number /= 10;
            }
            if(sum == i) return i;
        }
        return -1;
    }
};