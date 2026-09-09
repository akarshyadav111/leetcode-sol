class Solution {
public:
    bool checkValidString(string s) {
        stack<int> ls;
        stack<int> rs;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                ls.push(i);
            } else if (s[i] == '*') {
                rs.push(i);
            } else {
                if (!ls.empty()) {
                    ls.pop();
                } else if (!rs.empty()) {
                    rs.pop();
                } else {
                    return false;
                }
            }
        }
        // Match remaining '(' with '*' that appear after them
        while (!ls.empty() && !rs.empty()) {
            if (ls.top() < rs.top()) {
                ls.pop();
                rs.pop();
            } else {
                break;
            }
        }
        
        return ls.empty();
    }
};