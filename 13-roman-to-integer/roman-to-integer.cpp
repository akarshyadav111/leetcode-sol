class Solution {
public:
    int ret(char c){
        if(c == 'M') return 1000;
        else if(c == 'D') return 500;
        else if(c == 'C') return 100;
        else if(c == 'L') return 50;
        else if(c == 'X') return 10;
        else if(c == 'V') return 5;
        else return 1;
    }
    int romanToInt(string s) {
        int n{};
        for(int i = 0; i < s.length(); i++){
            if (i + 1 < s.length() && ret(s[i]) < ret(s[i+1])) n -= ret(s[i]); 
            else n += ret(s[i]); 
        }
        return n;
    }
};