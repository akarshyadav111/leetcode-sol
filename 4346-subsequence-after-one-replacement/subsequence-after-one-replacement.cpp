// class Solution {
// public:
//     bool canMakeSubsequence(string s, string t) {
//         int i=0, j=0, x=1;
//         while(i < s.length() && j < t.length()){
//             if(s[i] == t[j]){
//                 i++;
//                 j++;
//             }else if(x==1){
//                 x--;
//                 i++;
//                 j++;
//             }else{
//                 j++;
//             }
//         }
//         if(i == s.length()) return true;
//         else return false;
//     }
// };
class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int m = s.size(), n = t.size();
        if (m > n) return false;

        vector<int> pre(m + 1), suf(m + 1);

        // pre[i] = earliest position in t after matching first i characters of s
        int j = 0;
        pre[0] = -1;
        for (int i = 0; i < m; i++) {
            while (j < n && t[j] != s[i]) j++;
            if (j == n) pre[i + 1] = n;
            else pre[i + 1] = j++;
        }

        // suf[i] = latest position in t where s[i...] can start
        j = n - 1;
        suf[m] = n;
        for (int i = m - 1; i >= 0; i--) {
            while (j >= 0 && t[j] != s[i]) j--;
            if (j < 0) suf[i] = -1;
            else suf[i] = j--;
        }

        // Already a subsequence
        if (pre[m] != n) return true;

        // Try replacing s[i]
        for (int i = 0; i < m; i++) {
            int left = pre[i];
            int right = suf[i + 1];

            if (left != n && right != -1 && left < right - 1)
                return true;

            if (i == 0 && right > 0)
                return true;

            if (i == m - 1 && left < n - 1)
                return true;
        }

        return false;
    }
};