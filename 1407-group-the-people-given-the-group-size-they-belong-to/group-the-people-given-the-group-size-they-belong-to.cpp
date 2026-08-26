class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& g) {
        vector<vector<int>> v;
        int n = g.size();

        vector<int> arr(n);
        vector<int> size = g;

        for(int i = 0; i < n; i++) arr[i] = i;

        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(size[j] > size[j + 1]){
                    swap(size[j], size[j + 1]);
                    swap(arr[j], arr[j + 1]);
                }
            }
        }

        int i = 0;

        while(i < n){
            int groupSize = size[i];
            vector<int> temp;

            for(int j = 0; j < groupSize; j++){
                temp.push_back(arr[i + j]);
            }

            v.push_back(temp);
            i += groupSize;
        }

        return v;
    }
};