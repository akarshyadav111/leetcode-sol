class Solution {
public:
    string winningPlayer(int x, int y) {
        int c1 = (x * 75), c2 = (y * 10);
        int c{};
        while(c1 > 0 && c2 > 3 ){
            if(c1 < 75) break;
            c1-=75;
            if(c2 < 40) break;
            c2-=40;
            c++;
        }
        if(!(c&1)) return "Bob";
        return "Alice";
    }
};