class Solution {
public:
    int partitionString(string s) {
        int c{};
        vector<int> ls(26 , -1);
        int su{};
        for(int i=0; i<s.length(); i++){
            if(ls[s[i]-'a'] >= su){
                c++;
                su=i;
            }
            ls[s[i]-'a'] = i;
        }
        return c+1;
    }
};