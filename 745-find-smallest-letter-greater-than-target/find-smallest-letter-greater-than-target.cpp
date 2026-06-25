class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(target == 'z') return letters[0];
        if(target >= letters[letters.size()-1]) return letters[0];
        int low=0, high=letters.size()-1;
        while(low<high){
            int mid = low + (high - low) / 2;
            // if(low==high) break;
            if(letters[mid] <= target){
                if(letters[mid+1] > target){
                    return letters[mid+1];
                }else{
                    low=mid+1;
                }
            }else{
                high=mid;
            }
        }
        return letters[low];
    }
};