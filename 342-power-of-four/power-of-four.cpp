class Solution {
public:
    bool isPowerOfFour(int n) {
        int low = 0, high = 31;
        while(low <= high){
            int mid = low + (high - low) / 2;
            if(pow(4, mid) == n) return true;
            else if(pow(4, mid) > n){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return false;
    }
};