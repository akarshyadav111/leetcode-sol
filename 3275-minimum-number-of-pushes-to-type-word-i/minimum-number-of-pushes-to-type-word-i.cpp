class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int m{}, i=1;
        while(n > 8){
            m += i*8;
            n-=8;
            i++;
        }
        m += i*n;
        return m;
    }
};