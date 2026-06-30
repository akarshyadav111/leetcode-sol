class Solution {
public:
    bool detectCapitalUse(string word) {
        int count{}, count1{};
        if(word.length() == 1 ) return true;
        if(isupper(word[0])) count++, count1++;
        if(islower(word[0])) count1++;
        for(int i=1; i<word.length(); i++){
            if(isupper(word[i])) count++;
            if(islower(word[i])) count1++;
        }
        if(count==word.length()) return true;
        if(count1==word.length()) return true;
        return false;
    }
};