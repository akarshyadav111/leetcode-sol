class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        set<string> s;
        vector<string> v;
        for(int i=2; i<=n; i++){
            for(int j=1; j<i; j++){ 
                if(gcd(i, j) == 1) s.insert(to_string(j) + "/" + to_string(i));
            }
        }
        for(string x : s){
            v.push_back(x);
        }
        return v;
    }
};