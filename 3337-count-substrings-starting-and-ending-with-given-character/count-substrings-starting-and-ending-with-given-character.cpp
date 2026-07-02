class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long count{};
        // for(int i=0; i<s.length(); i++){
        //     vector<char> v; 
        //     for(int j=i; j<s.length(); j++){
        //         v.push_back(s[j]);
        //         if(v[0] == c && v[v.size()-1] == c) count++;
        //     }
        // }
        // return count;
        for(int i=0; i<s.length(); i++){
            if(s[i] == c) count++;
        }
        return count*(count+1)/ 2;
    }
};