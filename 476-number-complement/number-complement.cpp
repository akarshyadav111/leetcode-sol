class Solution {
public:
    int findComplement(int num) {
        int ans = 0, shift = 0;
        while(num>0){
            int bit = (num & 1) ^ 1;
            bit <<= shift;
            ans |= bit;
            shift++;
            num >>= 1;
        }
        return ans;
    }
};