class Solution {
public:
    const int MOD = 1e9+7;
    int numSub(string s) {
        int count{}, res{};
        for(int i=0; i<s.length(); i++){
            if(s[i]=='0' && count > 0){
                long long temp = 1LL * count * ( count + 1 ) / 2;
                res = ( res + temp ) % MOD;
                count = 0; 
            }
            if(s[i]=='1') count++;
        }
        if(count > 0){
                long long temp = 1LL * count * ( count + 1 ) / 2;
                res = ( res + temp ) % MOD;
        }
        return res;
    }
};
