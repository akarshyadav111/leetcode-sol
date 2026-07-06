class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        while(1){
            int sum{};
            while(num!=0){
                int rem = num % 10;
                sum += rem;
                num/=10;
            }
            if(sum < 10) return sum;
            num = sum;
        }
        return 0;
    }
};