class Solution {
public:
    int appendCharacters(string s, string t) {
        int i={}, j={};
        while(i<t.length() && j<s.length()){
            if(t[i] == s[j]){
                i++;
            }
            j++;
        }
        return t.length()-i;
    }
};