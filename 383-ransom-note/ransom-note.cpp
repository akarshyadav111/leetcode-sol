class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<char, int> freq;
        for(int i=0; i<m.length(); i++){
            freq[m[i]]++;
        }
        for(int i=0; i<r.length(); i++){
            if(freq[r[i]]==0){
                return false;
            }
            freq[r[i]]--;
        }
        return true;
    }
};