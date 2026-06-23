class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        // unordered_map<int, int> f1, f2;
        // for(int x : g){
        //     f1[x]++;
        // }
        // for(int x : s){
        //     f2[x]++;
        // }
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int l=0, r=0;
        int count = 0;
        while(l<g.size() && r<s.size()){
            if(s[r] >= g[l]){
                r++;
                l++;
                count++;
            }else{
                r++;
            }
        }
        return count;

    }
};