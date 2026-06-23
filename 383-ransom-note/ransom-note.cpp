class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> freq;
        for(int i=0; i<r.length(); i++){
            freq[r[i]]++;
        }
        for(int i=0; i<m.length(); i++){
            freq[m[i]]--;
        }
        for(auto it : freq){
            if(it.second > 0){
                return false;
            }
        }
        return true;
    }
};