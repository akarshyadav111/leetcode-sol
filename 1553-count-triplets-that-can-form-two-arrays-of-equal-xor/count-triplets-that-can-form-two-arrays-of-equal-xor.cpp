class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int n = arr.size();
        int count = 0;
        for (int i = 0; i < n; ++i) {
            int c_x = 0;
            for (int k = i; k < n; ++k) {
                c_x ^= arr[k];
                if (c_x == 0) {
                    count += (k - i);
                }
            }
        }
        return count;
    }
};