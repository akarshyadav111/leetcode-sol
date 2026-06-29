class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        set<int> s;
        vector<int> temp;
        for(int x: nums){
            freq[x]++;
            if(freq[x] > nums.size()/3){
                s.insert(x);
            }
        }
        for(int x : s){
            temp.push_back(x);
        }
        return temp;
    }
};