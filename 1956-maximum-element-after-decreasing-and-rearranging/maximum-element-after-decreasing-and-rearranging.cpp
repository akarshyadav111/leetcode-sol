class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int c{}, mini=INT_MAX, idx{};
        // if(arr[0]!=1){
        //     for(int i=1; i<arr.size(); i++){
        //         if(mini > arr[i]){ mini = arr[i]; idx = i;}
        //     }
        //     swap(arr[0], arr[idx]);
        //     c++;
        // }
        sort(arr.begin(), arr.end());
        if(arr[0]!=1){ arr[0] = 1; c++;}
        for(int i=1; i<arr.size(); i++){
            if(abs(arr[i]-arr[i-1]) > 1) {arr[i] = arr[i-1]+1; c++;}
            // if(arr[i]-arr[i-1]==-1) {arr[i] = arr[i-1]; c++;}
        }
        return arr.back();
    }
};