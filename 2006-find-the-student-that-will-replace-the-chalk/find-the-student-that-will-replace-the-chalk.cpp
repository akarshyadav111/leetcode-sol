class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        vector<long long> pref(chalk.size());
        pref[0] = chalk[0];
        for(int i=1; i<chalk.size(); i++){
            pref[i] = pref[i-1] + chalk[i];
        }
        while(k>=pref[chalk.size()-1]){
            k=k%pref[chalk.size()-1];
        }
        int idx{};
        int low=0, high=pref.size()-1;
        while(low<high){
            int mid = low + (high - low) / 2;
            if(pref[mid] <= k){
                low = mid + 1;
            }else if(pref[mid] > k){
                high = mid;
            }
        }
        return low;
    }
};