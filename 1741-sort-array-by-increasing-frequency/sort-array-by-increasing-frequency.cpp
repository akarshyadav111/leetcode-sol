class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int x : nums) freq[x]++;
        vector<int> num, fre;
        for(auto& it : freq){
            num.push_back(it.first);
            fre.push_back(it.second);
        }
        int nn = num.size();
        for(int i=0; i<nn-1; i++){
            for(int j=0; j<nn-i-1; j++){
                if(fre[j] == fre[j+1]){
                    if(num[j] < num[j+1]){
                        swap(num[j], num[j+1]);
                    }
                }
                if(fre[j] > fre[j+1]){
                    swap(fre[j], fre[j+1]);
                    swap(num[j], num[j+1]);
                }
            }
        }
        vector<int> res;
        for(int i=0; i<num.size(); i++){
            while(fre[i] > 0){
                res.push_back(num[i]);
                fre[i]--;
            }
        }
        return res;
    }
};