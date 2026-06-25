class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low=0, high=arr.size()-1;
        while(low<=high){
            // int mid = low + (high - low) / 2;
            if(arr[low]==arr[high]){
                low++;
                high--;
            }else if(arr[low] > arr[high]){
                high--;
            }else{
                low++;
            }
        }
        return low-1;
    }
};