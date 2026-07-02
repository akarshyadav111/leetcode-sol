class Solution {
public:
    string customSortString(string o, string s) {
        unordered_map<char, int> freq;
        for(int i=0; i<s.length(); i++){
            freq[s[i]]++;
        }
        vector<char> v;
        for(int i=0; i<o.length(); i++){
            if(freq[o[i]] > 0){
                for(int j=0; j<freq[o[i]]; j++){
                    v.push_back(o[i]);
                }
                freq[o[i]]=0;
            }
        }
        for(int i=0; i<s.length(); i++){
            if(freq[s[i]] > 0){
                v.push_back(s[i]);
            }
        }
        string stri(v.begin(), v.end());
        return stri;
    }
};