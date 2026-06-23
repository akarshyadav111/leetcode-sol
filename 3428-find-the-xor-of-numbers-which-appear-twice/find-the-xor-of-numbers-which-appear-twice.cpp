class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> freq;
        // int count = 0;
        for(int x : nums){
            freq[x]++;
            // if(freq[x]==2){
            //     count++;
            // }
        }
        // if(count == 0) return 0;
        // int x = 0;
        int a = 0;
        for(auto it : freq){
            if(it.second == 2){
                // if(x==0){
                //     a = it.first;
                //     x++;
                // }else{
                    a ^= it.first;
                // }
            }
        }
        return a;

    }
};