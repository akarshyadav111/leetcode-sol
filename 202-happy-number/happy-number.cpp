class Solution {
public:
    long long sum(long long n){
        long long s{};
        while(n!=0){
            int rem = n % 10;
            s += pow(rem, 2);
            n/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        if(n==1) return true;
        unordered_map<int, int> freq;
        while(n){
            freq[n]++;
            if(freq[n] > 1) break;
            n = sum(n);
            if(n==1) return true;
        }
        return false;
    }
};