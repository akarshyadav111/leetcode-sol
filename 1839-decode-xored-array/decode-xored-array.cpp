class Solution {
public:
    vector<int> decode(vector<int>& e, int f) {
        vector<int> ans(e.size()+1);
        ans[0] = f;
        for(int i=0; i<e.size(); i++){
            ans[i+1] = e[i] ^ ans[i];
        }
        return ans;
    }
};