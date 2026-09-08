class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> v;
        unordered_map<int, int> freq;
        for(auto el : nums){
            freq[el]++;
            if(v.size() < freq[el]) v.push_back({});
            v[freq[el] - 1].push_back(el);
        }
        return v;
    }
};