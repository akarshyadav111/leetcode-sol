// class Solution {
// public:
//     bool areAlmostEqual(string s1, string s2) {
//         if(s1 == s2) return true;
//         if(s1.length()!=s2.length()) return false;
//         for(int i=0; i<s2.length()-1; i++){
//             for(int j=i+1; j<s2.length(); j++){
//                 swap(s2[i], s2[j]);
//                 if(s1 == s2) return true;
//                 swap(s2[i], s2[j]);
//             }
//         }
//         return false;
//     }
// };
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;

        int idx1 = -1;
        int idx2 = -1;

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != s2[i]) {
                if (idx1 == -1) {
                    idx1 = i; // First mismatch found
                } else {
                    idx2 = i; // Second mismatch found
                    break;    // Stop looping immediately
                }
            }
        }

        // If we didn't find exactly two mismatches, one swap cannot fix it
        if (idx1 == -1 || idx2 == -1) return false;

        // Simulate the swap on s2 and check if they match
        swap(s2[idx1], s2[idx2]);
        return s1 == s2;
    }
};