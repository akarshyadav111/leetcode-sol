class Solution {
public:
    int titleToNumber(string s) {
        int sum=0, x=0;
        for(int i=s.length()-1; i>=0; i--){
            sum += pow(26, x++) * (s[i] - 'A' + 1);
        }
        return sum;
    }
};