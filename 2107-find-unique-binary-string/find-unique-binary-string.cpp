class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            int res = stoi(nums[i], nullptr, 2);
            freq[res]++;
        }
        int idx{};
        for(int i=0; i<pow(2, n); i++){
            if(freq[i] == 0){
                idx = i;
                break;
            }
        }
        string b = bitset<16>(idx).to_string().substr(16-n);
        return b;
    }
};