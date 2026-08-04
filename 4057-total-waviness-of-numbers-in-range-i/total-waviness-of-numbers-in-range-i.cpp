// class Solution {
// public:
//     int totalWaviness(int num1, int num2) {
//         int c{};
//         for(int i=num1; i<=num2; i++){
//             if(i<100) continue;
//             vector<int> v;
//             int t=i;
//             while(t!=0){
//                 int rem = t % 10;
//                 v.push_back(rem);
//                 t/=10;
//             }
//             for(int j=1; j<v.size()-1; j++){
//                 if(v[j] > v[j-1] && v[j] > v[j+1]) c++;
//             }
//         }
//         return c;
//     }
// };

class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int total_waviness = 0;
        
        for (int i = num1; i <= num2; ++i) {
            if (i < 100) continue; // Numbers with < 3 digits cannot have waviness
            
            std::string s = std::to_string(i);
            int n = s.length();
            
            // Loop through the inner digits (skip first and last)
            for (int j = 1; j < n - 1; ++j) {
                // Check Peak: strictly greater than both neighbors
                if (s[j] > s[j - 1] && s[j] > s[j + 1]) {
                    total_waviness++;
                }
                // Check Valley: strictly less than both neighbors
                else if (s[j] < s[j - 1] && s[j] < s[j + 1]) {
                    total_waviness++;
                }
            }
        }
        
        return total_waviness;
    }
};

