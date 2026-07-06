class Solution {
public:
    int numRescueBoats(vector<int>& p, int li) {
        int sum{}, count{};
        int l=0, r=p.size()-1;
        sort(p.begin(), p.end());
        while(l<=r){
            if(p[l] + p[r] <= li){
                l++;
                r--;
                count++;
            }else{
                r--;
                count++;
            }
        }
        return count;
    }
};