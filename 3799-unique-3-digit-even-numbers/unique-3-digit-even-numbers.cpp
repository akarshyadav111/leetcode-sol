class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> s;
        int n = digits.size();
        int c{};
        for(size_t i=0; i<n; i++){
            if(digits[i] != 0){
                for(size_t j=0; j<n; j++){
                    if(j!=i){
                        for(size_t k=0; k<n; k++){
                            if(k!=i && k!=j){
                                if(!(digits[k] & 1)){
                                    int num=(digits[i]*100)+(digits[j]*10)+(digits[k]);
                                    s.insert(num);
                                }
                            }
                        }
                    }
                }
            }
        }
        return s.size();
    }
};