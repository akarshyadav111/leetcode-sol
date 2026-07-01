class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> temp;
        temp.push_back(0);
        temp.push_back(gain[0]);
        int start = gain[0];
        for(int i=1; i<gain.size(); i++){
            start += gain[i];
            temp.push_back(start);
        }
        int m = 0;
        for(int i=0; i<temp.size(); i++){
            m = max(m, temp[i]);
        }
        return m;
    }
};