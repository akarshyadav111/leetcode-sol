class Solution {
public:
    int countDigits(int num) {
        int c{};
        int m = num;
        while(num){
            int rem = num % 10;
            if(!(m % rem)) c++;
            num/=10;
        }
        return c;
    }
};