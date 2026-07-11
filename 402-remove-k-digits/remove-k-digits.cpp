class Solution {
public:
    string removeKdigits(string s, int k) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            while(!st.empty() && st.top() > s[i] && k!=0){
                st.pop();
                k--;
            }
            st.push(s[i]);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }
        string result = "";
        while(!st.empty()) {
            result += st.top(); 
            st.pop();           
        }
        reverse(result.begin(), result.end());
        int start = 0;
        while (start < result.length() && result[start] == '0') {
            start++;
        }
        result = result.substr(start);
        if (result == "") {
            return "0";
        }
        return result;
    }
};