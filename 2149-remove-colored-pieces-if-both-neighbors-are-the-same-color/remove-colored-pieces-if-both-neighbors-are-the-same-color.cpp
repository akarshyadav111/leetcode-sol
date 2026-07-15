class Solution {
public:
    bool winnerOfGame(string c) {
        int c1{}, c2{};
        for(int i=1; i<c.length()-1; i++){
            if(c[i] == 'A' && c[i-1] == 'A' && c[i+1] == 'A') c1++;
            if(c[i] == 'B' && c[i-1] == 'B' && c[i+1] == 'B') c2++;
        }
        return c1 > c2;
    }
};