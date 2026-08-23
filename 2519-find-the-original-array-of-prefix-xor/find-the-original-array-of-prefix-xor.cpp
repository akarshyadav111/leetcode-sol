class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> num;
        int n = pref.size();
        num.push_back(pref[0]);
        for (int i = 1; i < n; i++) {
            num.push_back(pref[i - 1] ^ pref[i]);
        }
        return num;
    }
};