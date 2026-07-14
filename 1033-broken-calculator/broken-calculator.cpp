class Solution {
public:
    int brokenCalc(int s, int t) {
        long long count{};
        while(t>s){
            if(t==s) break;
            if(t%2!=0) t++;
            else t/=2;
            count++;
        }
        return (int)count + (s - t);
    }
};