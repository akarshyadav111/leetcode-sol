class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res{}, prev{}, curr{};
        for(int i=0; i<bank.size(); i++){
            for(int j=0; j<bank[i].size(); j++){
                if(bank[i][j] == '1'){
                    curr++;
                }
            }
            res += prev * curr;
            if(curr != 0) prev = curr;
            curr=0;
        }
        return res;
    }
};