class Solution {
public:
    int distinctSubseqII(string s) {
        int MOD = 1e9 + 7;
        vector<long> endsWith(26, 0);
        for (char c : s) {
            int idx = c - 'a';
            long currentSum = 0;
            for (long count : endsWith) {
                currentSum = (currentSum + count) % MOD;
            }
            endsWith[idx] = (currentSum + 1) % MOD;
        }
        long total = 0;
        for (long count : endsWith) {
            total = (total + count) % MOD;
        }
        return total;
    }
};