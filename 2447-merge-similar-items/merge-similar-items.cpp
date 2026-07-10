class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> v;
        unordered_map<int, int> freq;
        for (auto &x : items1) freq[x[0]] += x[1];
        for (auto &x : items2) freq[x[0]] += x[1];
        for(auto it : freq){
            v.push_back({it.first, it.second});
        }
        sort(v.begin(), v.end());
        return v;
    }
};