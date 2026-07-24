class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxCount{};
        unordered_map<int, int> freq;
        int l=0;
        for(int r=0; r<s.length(); r++){
            freq[s[r]]++;
            while(freq[s[r]] > 1){
                freq[s[l]]--;
                l++;
            }
            maxCount = max(maxCount, r-l+1);
        }
        return maxCount;
    }
};