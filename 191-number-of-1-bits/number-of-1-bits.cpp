class Solution {
public:
    int hammingWeight(int n) {
        int count = 1;
        while(n>0){
            if(n &= (n-1)) count++;
            n=n>>1;
        }
        return count;
    }
};