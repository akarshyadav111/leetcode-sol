class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1;
        while(low<=high){
            int mid= low + (high - low)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[low]<=nums[mid]){
                if(nums[low] <= target && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(target>nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }

        // bool f = false;
        // for(int i=0; i<nums.size()-1; i++){
        //     if(nums[i] > nums[i+1]){
        //         index = i;
        //         f = true;
        //         break;
        //     }
        // }
        // int low=0, high=nums.size()-1;
        // if(nums[index]==target){
        //     return index;
        // }else if(nums[index] > target){
        //     low=index+1;
        //     while(low<=high){
        //         int mid = low + (high - low)/2;
        //         if(nums[mid]==target){
        //             return mid;
        //         }else if(nums[mid] > target){
        //             high=mid-1;
        //         }else{
        //             low=mid+1;
        //         }
        //     }
        // }else{
        //     high=index-1;
        //     while(low<=high){
        //         int mid = low + (high - low)/2;
        //         if(nums[mid]==target){
        //             return mid;
        //         }else if(nums[mid] > target){
        //             high=mid-1;
        //         }else{
        //             low=mid+1;
        //         }
        //     }
        // }
        return -1;
    }
};