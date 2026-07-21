class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        if(deck.size()==1) return false;
        unordered_map<int, int> freq;
        for(int x : deck) freq[x]++;
        int i=0;
        int prev=freq[deck[0]];
        for(auto& it : freq){
            prev = gcd(prev, it.second);
        } 
        return prev > 1;
    }
};