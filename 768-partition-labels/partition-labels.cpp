class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char, int> map;
        for(int i=0; i<s.length(); i++){
            map[s[i]] = i;
        }
        int end{};
        int ll{};
        vector<int> l;
        // for(int i=0; i<s.length(); i++){
        //     if(i == end && i!=0){
        //         l.push_back(end-ll+1);
        //         ll = i+1;
        //     }
        //     end = max(map[s[i]], end);
        // }
        for (int i = 0; i < s.length(); i++) {
            end = max(end, map[s[i]]);
            if (i == end) {
                l.push_back(end - ll + 1);
                ll = i + 1;
            }
        }
        return l;
    }
};