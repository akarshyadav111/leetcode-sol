class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        int maxi=0;
        for(char x : s){
            freq[x]++;
        }
        vector<pair<int , char>> vec;
        for(auto it : freq){
            vec.push_back({it.second, it.first});
        }
        sort(vec.rbegin(), vec.rend());
        string temp = "";
        for(auto it : vec){
            int f = it.first;
            for(int i=0; i<f; i++){
                temp+=it.second;
            }
        }
        
        return temp;

        // int freq[26] = {0};
        // for(char c : m) {
        //     freq[c - 'a']++;
        // }
        // string temp = "";
        // for(char c : m){

        // }
        // sort(s.begin(), s.end());
        // return s;
    }
};