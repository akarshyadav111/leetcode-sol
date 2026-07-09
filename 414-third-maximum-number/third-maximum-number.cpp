class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int x : nums) s.insert(x);
        if (s.size() < 3) {
            return *s.rbegin();
        }
        int c{};
        for (auto it = s.rbegin(); it != s.rend(); ++it) {
            c++;
            if(c == 3) return *it ;
        }
        return 0;
    }
};