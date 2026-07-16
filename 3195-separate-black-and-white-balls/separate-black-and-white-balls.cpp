class Solution {
public:
    long long minimumSteps(string s) {
        int i=0, j=s.length()-1;
        long long su{};
        while(i<j){
            if(s[i]=='0'){
                i++;
            }else if(s[j] == '1'){
                j--;
            }else{
                su+=j-i;
                j--;
                i++;
            }
        }
        return su;
    }
};