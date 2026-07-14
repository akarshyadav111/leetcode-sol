class Solution {
public:
    bool asteroidsDestroyed(int m, vector<int>& a) {
        long long s = m;
        sort(a.begin(), a.end());
        for(int i=0; i<a.size(); i++){ if(a[i] > s) return false; s+=a[i];}
        return true;
    }
};