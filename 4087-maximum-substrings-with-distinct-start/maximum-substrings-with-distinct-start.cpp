class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26);
        int n=s.length(), c{};
        for(size_t i=0; i<n; i++){
            freq[s[i]-'a']++;
        }
        for(size_t i=0; i<26; i++) if(freq[i] > 0) c++;
        return c;
    }
};