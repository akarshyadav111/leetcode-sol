class Solution {
public:
    int minCost(string s, vector<int>& n) {
        long long sum{};
        int l = s.length();
        for(int i=1; i<l; i++){
            if(s[i] == s[i-1]){
                sum += min(n[i], n[i-1]);
                if(n[i] < n[i-1]) n[i] = n[i-1];
            }
        }
        return (int)sum;
    }
};