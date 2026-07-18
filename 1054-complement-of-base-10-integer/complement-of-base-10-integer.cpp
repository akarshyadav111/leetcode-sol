class Solution {
public:
    int bitwiseComplement(int num) {
        if(num==0) return 1;
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