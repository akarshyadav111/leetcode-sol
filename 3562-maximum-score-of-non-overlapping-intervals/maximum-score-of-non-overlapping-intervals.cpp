class Solution {
public:
    vector<int> maximumWeight(vector<vector<int>>& in) {
        int n = in.size();

        vector<vector<int>> arr(n, vector<int>(4));

        for (int i = 0; i < n; i++) {
            arr[i] = {in[i][1], in[i][0], in[i][2], i};
        }

        sort(arr.begin(), arr.end());

        vector<vector<long long>> dp(n + 1, vector<long long>(5, 0));
        vector<vector<vector<int>>> indices(
            n + 1, vector<vector<int>>(5)
        );

        vector<int> prev(n);

        // Find the last interval that doesn't overlap
        for (int i = 0; i < n; i++) {
            int l = 0, r = i - 1;
            int idx = -1;

            while (l <= r) {
                int mid = l + (r - l) / 2;

                if (arr[mid][0] < arr[i][1]) {
                    idx = mid;
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }

            prev[i] = idx;
        }

        for (int i = 1; i <= n; i++) {
            long long weight = arr[i - 1][2];
            int orig_idx = arr[i - 1][3];
            int p = prev[i - 1];

            for (int k = 1; k <= 4; k++) {

                // Don't take current interval
                long long exclude_val = dp[i - 1][k];
                vector<int> exclude_ind = indices[i - 1][k];

                // Take current interval
                long long include_val =
                    weight + dp[p + 1][k - 1];

                vector<int> include_ind =
                    indices[p + 1][k - 1];

                include_ind.push_back(orig_idx);

                sort(include_ind.begin(), include_ind.end());

                if (include_val > exclude_val) {
                    dp[i][k] = include_val;
                    indices[i][k] = include_ind;
                }
                else if (include_val < exclude_val) {
                    dp[i][k] = exclude_val;
                    indices[i][k] = exclude_ind;
                }
                else {
                    dp[i][k] = exclude_val;

                    if (include_ind < exclude_ind)
                        indices[i][k] = include_ind;
                    else
                        indices[i][k] = exclude_ind;
                }
            }
        }

        long long max_s = 0;
        int best_k = 0;

        for (int k = 0; k <= 4; k++) {
            if (dp[n][k] > max_s) {
                max_s = dp[n][k];
                best_k = k;
            }
            else if (dp[n][k] == max_s &&
                     indices[n][k] < indices[n][best_k]) {
                best_k = k;
            }
        }

        return indices[n][best_k];
    }
};