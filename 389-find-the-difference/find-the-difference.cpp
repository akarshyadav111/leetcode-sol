class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            if(map[t[i]] > 0){
                map[t[i]]--;
            }else{
                map[t[i]]++;
            }
        }
        for(auto it : map){
            if(it.second>0){
                return it.first;
            }
        }
        char ch = ' ';
        return ch;
    }
};