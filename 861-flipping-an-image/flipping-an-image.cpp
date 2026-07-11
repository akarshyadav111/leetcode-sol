class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& im) {
        int n = im.size();
        int m = im[0].size();
        for(int i=0; i<n; i++){
            reverse(im[i].begin(), im[i].end());
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(im[i][j] == 0) im[i][j] = 1;
                else im[i][j] = 0;
            }
        }
        return im;
    }
};