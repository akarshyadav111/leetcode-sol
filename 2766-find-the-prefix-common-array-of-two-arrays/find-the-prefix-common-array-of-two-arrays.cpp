class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> v1(n+1), v(n);
        long long c{};
        for(int i=0; i<n; i++){
            v1[A[i]]++;
            v1[B[i]]++;
            if(v1[A[i]] > 1) c++;
            if(v1[B[i]] > 1 && A[i] != B[i]) c++;
            v[i] = c;
        }
        return v;
    }
};