class Solution {
public:
    void factors(vector<bool>& isPrime, int& n){
        if (n >= 0) isPrime[0] = false;
        if (n >= 1) isPrime[1] = false;

        for (int p = 2; p * p <= n; ++p) {
            if (isPrime[p]) {
                for (int i = p * p; i <= n; i += p) {
                    isPrime[i] = false;
                }
            }
        }
    }
    int smallestValue(int n) {
        vector<bool> isPrime(n + 1, true);
        factors(isPrime, n);
        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            if (isPrime[i]) primes.push_back(i);
        }
        while (true) {
            int temp = n;
            int sum = 0;
            for (int p : primes) {
                while (temp % p == 0) {
                    sum += p;
                    temp /= p;
                }
                if (temp == 1) break;
            }
            if (sum == n) return n;
            n = sum;
        }
    }
};