class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0,x=0;
        for(int i=s.length()-1; i>=0; i--){
            if(x==1 && s[i]==' ') break;
            else if(isalpha(s[i])){
                len++;
                x=1;
            }else{
                continue;
            }
        }
        return len;
    }
};