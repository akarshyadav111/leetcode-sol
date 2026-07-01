class Solution {
public:
    bool isSorted(string s){
        for(int i=0; i<s.length()-1; i++){
            if(s[i] > s[i+1]) return false;
        }
        return true;
    }
    int minDeletionSize(vector<string>& strs) {
        int count{}, x{};
        for(int i=0; i<strs[0].size(); i++){
            string s = "";
            for(int j=0; j<strs.size(); j++){
                string temp = strs[j];
                s += temp[x];
            }
            x++;
            if(!isSorted(s)) count++;
        }
        return count;
    }
};