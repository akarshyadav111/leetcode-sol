class Solution {
public:
    string removeDuplicates(string s) {
        int i=1;
        while(i < s.length()){
            if(s[i]==s[i-1]){
                s.erase(i-1, 2);
                i=1;
            }
            i++;
        }
        if(s[0]==s[1]){
            s.erase(0, 2);
        }
        return s;
    }
};