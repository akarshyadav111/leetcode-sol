class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> s;
        int num{};
        for(size_t i=0; i<n; i++){
            num = nums[i];
            s.insert(num);
            int number{};
            while(num){
                int rem = num % 10;
                number = number * 10 + rem;
                num/=10;
            }
            s.insert(number);
        }
        return s.size();
    }
};