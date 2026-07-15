class Solution {
public:
    int maxCoins(vector<int>& p) {
        sort(p.rbegin(), p.rend());
        int s{}, c{};
        for(int i=1; i<p.size(); i+=2){
            if(c > p.size()/3-1) break;
            s+=p[i];
            c++;
        }
        return s;
    }
};