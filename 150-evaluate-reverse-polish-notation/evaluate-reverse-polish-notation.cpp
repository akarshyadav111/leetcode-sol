class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        for (const auto& word : tokens) {
            if (word == "+" || word == "-" || word == "*" || word == "/") {
                int se = s.top();
                s.pop();

                int fi = s.top();
                s.pop();

                if (word == "+") {
                    s.push(fi + se);
                } 
                else if (word == "-") {
                    s.push(fi - se);
                } 
                else if (word == "*") {
                    s.push(fi * se);
                } 
                else {
                    s.push(fi / se);
                }
            } 
            else {
                s.push(stoi(word));
            }
        }

        return s.top();
    }
};