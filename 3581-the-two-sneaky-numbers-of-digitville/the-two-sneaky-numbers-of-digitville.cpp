class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freq;
        vector<int> temp;
        for(int x : nums){
            freq[x]++;
            if(freq[x] > 1) temp.push_back(x);
        }
        return temp;
    }
};