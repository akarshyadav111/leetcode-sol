class Solution {
public:
    int arrangeCoins(int n) {
        int low=1, high=n;
        while(low<=high){
            long mid = low + ( high - low ) / 2;
            if( mid * ( mid + 1 ) / 2 <= n){
                if((mid + 1) * (mid + 2) / 2 <= n){
                    low=mid+1;
                }else{
                    return mid;
                }
            }else{
                high=mid-1;
            }
        }
        return low-1;
    }
};