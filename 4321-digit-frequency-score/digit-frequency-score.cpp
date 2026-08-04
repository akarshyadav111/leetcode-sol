class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int> freq(10);
        while(n!=0){
            int rem = n % 10;
            freq[rem]++;
            n/=10;
        }
        int s{};
        for(int i=0; i<freq.size(); i++){
            s+=i*freq[i];
        }
        return s;
    }
};