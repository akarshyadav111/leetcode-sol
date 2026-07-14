class Solution {
public:
    int brokenCalc(int s, int t) {
        int c{};
        while(t>s){
            // if(t==s) break;
            if(t%2!=0) t++;
            else t/=2;
            c++;
        }
        return c + (s - t);
    }
};