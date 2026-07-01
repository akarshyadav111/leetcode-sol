class Solution {
public:
    bool buddyStrings(string s, string g) {
        if (s.length() != g.length()) return false;
        int count{};
        int idx1=-1, idx2=-1;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=g[i]){
                count++;
                if(count > 2) return false;
                if(idx1==-1){
                    idx1=i;
                }else if(idx2 == -1){
                    idx2=i;
                }
            }
        }
        if (count == 1) return false;
        if (count == 0) {
            vector<int> freq(26, 0);
            for(char c : s){
                freq[c - 'a']++;
                if(freq[c - 'a'] > 1) return true;
            }
            return false;
        }
        swap(s[idx1], s[idx2]);
        return s == g;

    }
};