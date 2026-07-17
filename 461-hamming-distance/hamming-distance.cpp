class Solution {
public:
    int hammingDistance(int x, int y) {
        x^=y;
        int c{};
        while(x>0){if((x&1)==1) c++; x>>=1;}
        return c; 
    }
};