class Solution {
public:

    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> m = {
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",
            ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.",
            "...","-","..-","...-",".--","-..-","-.--","--.."
        };
        unordered_set<string> s;
        
        for (const string& w : words) {
            string t = "";
            for (char c : w) {
                t += m[c - 'a'];
            }
            s.insert(t);
        }
        
        return s.size();
    }
};