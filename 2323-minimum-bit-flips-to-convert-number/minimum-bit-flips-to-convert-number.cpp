class Solution {
public:
    int minBitFlips(int s, int g) {
        int c{};
        while(s > 0 || g > 0){
            if((s & 1) != (g & 1)) c++;
            s >>= 1;
            g >>= 1;
        }
        return c;
    }
};