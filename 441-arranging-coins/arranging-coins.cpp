// class Solution {
// public:
//     int arrangeCoins(int n) {
//         int low=1, high=n;
//         while(low<=high){
//             long mid = low + ( high - low ) / 2;
//             if( mid * ( mid + 1 ) / 2 <= n){
//                 if((mid + 1) * (mid + 2) / 2 <= n){
//                     low=mid+1;
//                 }else{
//                     return mid;
//                 }
//             }else{
//                 high=mid-1;
//             }
//         }
//         return low-1;
//     }
// };

class Solution {
public:
    int arrangeCoins(int n) {
        long long low = 1, high = n;
        int ans = 0;
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long coins = mid * (mid + 1) / 2;
            if (coins <= n) {
                ans = mid;          
                low = mid + 1;      
            } else {
                high = mid - 1;     
            }
        }
        return ans;
    }
};