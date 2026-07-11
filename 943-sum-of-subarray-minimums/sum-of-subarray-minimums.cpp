class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        int MOD = 1e9 + 7;
        long long total_sum = 0;
        
        // Our measuring tape that stores indices!
        stack<int> st;

        // Pass 1: Walk through the array
        for (int i = 0; i < n; i++) {
            
            // The magic <= that prevents double-counting duplicates
            while (!st.empty() && arr[i] <= arr[st.top()]) {
                int curr_index = st.top();
                st.pop();
                
                // If stack is empty after popping, the phantom left boundary is -1
                int left_index = st.empty() ? -1 : st.top();
                int right_index = i;
                
                // Calculate distances (L and R)
                long long L = curr_index - left_index;
                long long R = right_index - curr_index;
                
                // Multiply using long long and apply MOD immediately
                long long total_value = (arr[curr_index] * L * R) % MOD;
                total_sum = (total_sum + total_value) % MOD;
            }
            
            // After dealing with strictly smaller elements, it's safe to push
            st.push(i);
        }

        // Pass 2: The Cleanup Phase! 
        // For numbers that never found a smaller number to their right
        while (!st.empty()) {
            int curr_index = st.top();
            st.pop();
            
            int left_index = st.empty() ? -1 : st.top();
            
            // The phantom right boundary is the very end of the array (n)
            int right_index = n; 
            
            long long L = curr_index - left_index;
            long long R = right_index - curr_index;
            
            long long total_value = (arr[curr_index] * L * R) % MOD;
            total_sum = (total_sum + total_value) % MOD;
        }

        // Return as a regular int since it safely fits now
        return total_sum;
    }
};