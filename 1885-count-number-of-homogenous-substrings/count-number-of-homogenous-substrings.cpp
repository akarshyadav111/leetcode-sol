class Solution {
public:
    const int MOD = 1e9+7;
    int countHomogenous(string s) {
        int count=1, res=0;
        for(int i=1; i<s.length(); i++){
            if(s[i] == s[i-1]){
                count++;
            }else{
                long long temp = 1LL*count*(count+1)/2;
                res = ( res + temp ) % MOD;
                count = 1;
            }
        }
        long long temp = 1LL * count * ( count + 1) / 2;
        res = (res + temp) % MOD;
        return res;
    }
};