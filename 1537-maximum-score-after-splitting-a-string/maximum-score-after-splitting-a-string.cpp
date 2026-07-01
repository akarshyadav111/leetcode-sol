class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        vector<int> v1(n), v2(n);
        if(s[0] == '0'){
            v1[0] = 1;
            v2[0] = 0;
        }else{
            v1[0] = 0;
            v2[0] = 1;
        }
        for(int i=1; i<n; i++){
            if(s[i] == '0'){
                v1[i] = v1[i-1] + 1;
                v2[i] = v2[i-1];
            }else{
                v1[i] = v1[i-1];
                v2[i] = v2[i-1] + 1;
            }
        }
        int maxi{};
        for(int i=0; i<n-1; i++){
            int sum = v1[i] + v2[n-1] - v2[i];
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};