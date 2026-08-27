class Solution {
public:
    int minOperations(int n) {
        // int arr[n];
        // for(int i=0; i<n; i++){
        //     arr[i] = (2 * i) + 1;
        // }
        // int m = (arr[0] + arr[n-1])/2;
        // int c{};
        // for(int i=0; i<n; i++){
        //     c+= abs(arr[i] - m);
        // }
        // return c/2;
        return n*n/4;
    }
};