class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> p;
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        for(int i=1; i<=n; i++){
            if (s.find(i) == s.end()){
                p.push_back(i);
            }
        }
        return p;
    }
};