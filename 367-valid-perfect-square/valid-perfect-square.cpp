class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1) return true;
        int low=0, high=num;
        int ans{};
        while(low<high){
            long long mid = low + ( high - low ) / 2;
            long long temp = mid * mid;
            if(temp == num){
                return true;
            }else if(temp > num){
                high=mid;
            }else{
                low=mid+1;
            }
        }
        return false;
    }
};

