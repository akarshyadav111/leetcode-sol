class Solution {
public:
    bool winnerOfGame(string c) {
        int c1{}, c2{};
        for(int i=1; i<c.length()-1; i++){
            if(c[i] == c[i-1] && c[i+1] == c[i]){
                if(c[i] == 'A') c1++;
                else c2++;
            }
        }
        return c1 > c2;
    }
};