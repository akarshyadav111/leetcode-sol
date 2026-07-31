// class Solution {
// public:
//     long long maximumValue(int n, int s, int m) {
//         if(n==0) return 0;
//         if(n==1) return s;
//         if(n==2) return s + m;
//         if(n==3) return ((n/2)*m) + s;
//         long long maxi = ((n/2)*m) - (((n/2)*m)-1) + s;
//         return maxi;
//     }
// };
class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if (n == 1) return s;
        long long peaks1 = n / 2;
        long long ans1 = s;
        if (peaks1 > 0) ans1 = 1LL * s + peaks1 * m - (peaks1 - 1);
        long long peaks2 = (n + 1) / 2;
        long long ans2 = 1LL * s + (peaks2 - 1) * (m - 1);
        return max(ans1, ans2);
    }
};