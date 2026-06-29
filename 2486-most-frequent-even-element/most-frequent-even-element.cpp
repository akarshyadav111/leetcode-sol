class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxi{}, maxe{};
        bool f = false;
        for(int x : nums){
            freq[x]++;
            if(x % 2 == 0 && freq[x] >= maxi){
                if(freq[x] == maxi){
                    maxe = min(x, maxe);
                }else{
                    f = true;
                    maxi = max(maxi, freq[x]);
                    maxe = x;
                }
            }
        }
        
        if(!f) return -1;
        return maxe;
    }
};