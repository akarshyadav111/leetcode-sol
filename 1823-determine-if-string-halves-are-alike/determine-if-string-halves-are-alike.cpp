class Solution {
public:
    bool isVowel(char s){
        if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u') return true;
        return false;
    }
    bool halvesAreAlike(string s) {
        int cnt1{}, cnt2{};
        for(int i=0; i<s.length(); i++){
            if(i<s.length()/2 && isVowel(tolower(s[i]))) cnt1++;
            if(i>=s.length()/2 && isVowel(tolower(s[i]))) cnt2++;
        }
        if(cnt1 == cnt2) return true;
        return false;
    }
};