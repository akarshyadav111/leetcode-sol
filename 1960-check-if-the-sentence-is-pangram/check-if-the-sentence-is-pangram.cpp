class Solution {
public:
    bool checkIfPangram(string sentence) {
        int count = 0;
        vector<bool> found(100, false);
        for(int i=0; i<sentence.length(); i++){
            if(!found[sentence[i]]){
                count++;
                found[sentence[i]] = true;
            }
        }
        if(count == 26){
            return true;
        }else{
            return false;
        }
        // unordered_set<char> s;
        // for(size_t i=0; i<sentence.length(); i++){
        //     s.insert(sentence[i]);
        // }
        // return s.size() == 26;
    }
};