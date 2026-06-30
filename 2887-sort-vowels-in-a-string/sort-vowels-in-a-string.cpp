class Solution {
public:
    bool isVowel(char s){
        return (s=='a' || s=='e' || s=='i' || s=='o' || s=='u');
    }
    string sortVowels(string s) {
        vector<char> v;
        for(int i=0; i<s.length(); i++){
            if(isVowel(tolower(s[i]))) v.push_back(s[i]);
        }
        sort(v.begin(), v.end());
        int x{};
        for(int i=0; i<s.length(); i++){
            if(isVowel(tolower(s[i]))) swap(s[i], v[x++]);
        }
        // for(int i=0; i<s.length()-1; i++){
        //     if(!isVowel(tolower(s[i]))) continue;
        //     else{
        //         for(int j=i+1; j<s.length(); j++){
        //             if(isVowel(tolower(s[j]))){
        //                 if(s[j] < s[i]){
        //                     swap(s[j], s[i]);
        //                 }
        //             }
        //         }
        //     }
        // }
        return s;
    }
};