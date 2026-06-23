class Solution {
public:
    bool canConstruct(string r, string m) {
        // unordered_map<char, int> freq;
        // for(int i=0; i<m.length(); i++){
        //     freq[m[i]]++;
        // }
        // for(int i=0; i<r.length(); i++){
        //     if(freq[r[i]]==0){
        //         return false;
        //     }
        //     freq[r[i]]--;
        // }
        // return true;

        int freq[26] = {0};
        for(char c : m) {
            freq[c - 'a']++;
        }
        for(char c : r) {
            if(freq[c - 'a'] == 0) {
                return false;
            }
            freq[c - 'a']--;
        }
        return true;
    }
};