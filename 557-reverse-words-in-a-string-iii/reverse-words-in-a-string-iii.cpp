class Solution {
public:
    string reverseWords(string s) {
        int l=0, count = 0;
        string ans = "";
        for(int i=0; i<s.length(); i++){
            if((s[i] == ' ' && i!=s.length()-1) || i == s.length()-1){
                if(i == s.length()-1){
                    string temp = s.substr(l, count+1);
                    reverse(temp.begin(), temp.end());
                    ans += temp + " ";
                    break;
                }
                string temp = s.substr(l, count);
                reverse(temp.begin(), temp.end());
                l = i+1;
                count=0;
                ans += temp + " ";
            }else{
                count++;
            }
        }
        return ans.substr(0, ans.length()-1);
    }
};