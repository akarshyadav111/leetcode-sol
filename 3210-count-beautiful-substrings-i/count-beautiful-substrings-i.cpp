// class Solution {
// public:
//     bool isVowel(char c){
//         return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//     }
//     int beautifulSubstrings(string s, int k) {
//         int cv{}, cc{}, count=0;
//         for(int i=0; i<s.length(); i++){
//             for(int j=0; j<s.length(); j++){
//                 cv=0, cc=0;
//                 string temp = s.substr(j, s.length()-j);
//                 for(int k=0; k<temp.length(); k++){
//                     if(isVowel(temp[k])) cv++;
//                     else cc++;
//                 }
//                 if(cc == cv && (cc*cv) % k == 0) count++;
//             }
//         }
//         return count;
//     }
// };
class Solution {
public:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u';
    }

    int beautifulSubstrings(string s, int k) {
        int n = s.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int vowels = 0, consonants = 0;

            for (int j = i; j < n; j++) {
                if (isVowel(s[j]))
                    vowels++;
                else
                    consonants++;

                if (vowels == consonants &&
                    (vowels * consonants) % k == 0)
                    ans++;
            }
        }

        return ans;
    }
};