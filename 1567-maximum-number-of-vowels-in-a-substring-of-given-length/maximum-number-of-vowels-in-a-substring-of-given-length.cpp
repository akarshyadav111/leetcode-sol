class Solution {
public:
    bool isVowel(char a){
        return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
    }
    int maxVowels(string s, int k) { 
        int count = 0, maxCount = 0;
        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        maxCount = count;
        for(int i=k; i<s.size(); i++){
            if(isVowel(s[i])) count++;
            if(isVowel(s[i - k])) count--;
            maxCount = max(count, maxCount);
        }
        return maxCount;
    }
};