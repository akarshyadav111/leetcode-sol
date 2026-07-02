class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int l=s.length()-1, skip1{};
        int r=t.length()-1, skip2{};
        while(l>=0 || r>=0){
            while(l>=0){
                if(s[l] == '#'){
                    skip1++;
                    l--;
                }else if(skip1 > 0){
                    skip1--;
                    l--;
                }else{
                    break;
                }
            }
            while(r>=0){
                if(t[r] == '#'){
                    skip2++;
                    r--;
                }else if(skip2 > 0){
                    skip2--;
                    r--;
                }else{
                    break;
                }
            }
            if (l >= 0 && r >= 0) {
                if (s[l] != t[r])
                    return false;
            }
            else if (l >= 0 || r >= 0) {
                return false;
            }
            l--;
            r--;
        }
        return (r == l);
    }
};