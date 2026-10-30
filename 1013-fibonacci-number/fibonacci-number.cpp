class Solution {
public:
    int fibo(int n, vector<int>& dp){
        if(dp[n] != -1) return dp[n];
        if(n <= 1) return n;
        return dp[n] = fibo(n-1, dp) + fibo(n-2, dp);
        
    }
    int fib(int n) {
        vector<int> dp(n+1, -1);
        return fibo(n, dp);
    }
};