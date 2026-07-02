class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> freq;
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(freq[t[i]] > 0) freq[t[i]]--;
        }
        int count{};
        for(auto it : freq){
            if(it.second != 0) count+=it.second;
        }
        return count;
    }
};