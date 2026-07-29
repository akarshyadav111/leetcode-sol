class Solution {
public:
    int strStr(string h, string n) {
        int a = h.length(), b = n.length();
        for (int i = 0; i <= a - b ; i++) {
            int j = 0;
            while (j < b && h[i + j] == n[j]) {
                j++;
            }
        if (j == b) return i;
        }
        return -1;
    }
};