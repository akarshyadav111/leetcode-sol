class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(int i=0; i<s.length(); i++){
            if(!st.empty()){
                if(isdigit(s[i])){
                    st.pop();
                }else{
                    st.push(s[i]);
                }
            }else{
                st.push(s[i]);
            }
        }
        string t = "";
        while(!st.empty()){
            t += st.top();
            st.pop();
        }
        reverse(t.begin(), t.end());
        return t;
    }
};