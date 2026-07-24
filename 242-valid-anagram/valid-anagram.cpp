class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq1;
        unordered_map<char, int> freq2;
        for(int i=0; i<s.length(); i++){
            freq1[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            freq2[t[i]]++;
        }
        if(freq1.size() != freq2.size()) return false;
        for(auto it : freq1){
            if(freq1[it.first] != freq2[it.first]) return false;
        }
        return true;
    }
};