class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int idx1 = -1, idx2 = -1;
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                if(idx1 == -1){
                    idx1 = i;
                }else{
                    idx2 = i;
                    break;
                }
            }
        }
        if(idx1 == -1 || idx2 == -1) return false;
        swap(s1[idx1], s1[idx2]);
        if(s1 != s2) return false;
        return true;
    }
};
