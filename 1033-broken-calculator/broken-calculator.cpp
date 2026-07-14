class Solution {
public:
    int brokenCalc(int s, int t) {
        int c{};
        while(t>s){
            if((t & 1)==1) t++;
            else t/=2;
            c++;
        }
        return c + (s - t);
    }
};