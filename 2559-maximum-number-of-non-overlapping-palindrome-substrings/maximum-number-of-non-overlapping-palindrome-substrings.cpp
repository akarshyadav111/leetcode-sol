class Solution {
public:
    int maxPalindromes(string s, int k) {
        int n = s.length();
        // dp[i] stores the maximum number of non-overlapping valid palindromes in s[0...i-1]
        std::vector<int> dp(n + 1, 0);
        
        for (int i = 0; i < n; ++i) {
            // Carry forward the maximum result from the previous index
            dp[i + 1] = std::max(dp[i + 1], dp[i]);
            
            // 1. Check for odd-length palindromes centered at i
            int l = i, r = i;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int length = r - l + 1;
                if (length >= k) {
                    dp[r + 1] = std::max(dp[r + 1], dp[l] + 1);
                    break; // Greedy choice: stop expanding once a valid palindrome is found
                }
                l--;
                r++;
            }
            
            // 2. Check for even-length palindromes centered between i and i+1
            l = i; 
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r]) {
                int length = r - l + 1;
                if (length >= k) {
                    dp[r + 1] = std::max(dp[r + 1], dp[l] + 1);
                    break; // Greedy choice
                }
                l--;
                r++;
            }
        }
        
        return dp[n];
    }
};