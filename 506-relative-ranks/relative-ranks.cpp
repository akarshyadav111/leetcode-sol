class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& s) {
        int n = s.size();
        vector<string> r(n);
        map<int, int> m;
        
        for (int i = 0; i < n; ++i) m[s[i]] = i;
        
        int p = 1;
        for (auto it = m.rbegin(); it != m.rend(); ++it) {
            int idx = it->second;
            if (p == 1)      r[idx] = "Gold Medal";
            else if (p == 2) r[idx] = "Silver Medal";
            else if (p == 3) r[idx] = "Bronze Medal";
            else             r[idx] = to_string(p);
            p++;
        }
        return r;
    }
};