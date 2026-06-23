class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int x : nums){
            freq[x]++;
        }
        int count = 0;
        for(auto it : freq){
            if(it.second == 2){
                count++;
            }
        }
        if(count == 0) return 0;
        // if(count == 1){
        //     for(auto it : freq){
        //         if(it.second == 2){
        //             return it.first;
        //         }
        //     }
        // }
        // int x = 0;
        // int a, b;
        // for(auto it : freq){
        //     if(it.second == 2 && x == 0){
        //         a = it.first;
        //         x++;
        //     }
        //     if(it.second == 2 && x != 0){
        //         b = it.first;
        //     }
        // }
        // return a ^ b;
        int x = 0;
        int a;
        for(auto it : freq){
            if(it.second == 2){
                if(x==0){
                    a = it.first;
                    x++;
                }else{
                    a ^= it.first;
                }
            }
        }
        return a;

    }
};