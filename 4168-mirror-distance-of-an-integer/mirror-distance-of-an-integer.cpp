class Solution {
public:
    int mirrorDistance(int n) {
        int num{};
        int t = n;
        while(n!=0){
            int rem = n % 10;
            num = num * 10 + rem;
            n/=10;
        }
        return abs(num - t);
    }
};