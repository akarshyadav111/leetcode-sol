class Solution {
public:
    int maxIceCream(vector<int>& c, int co) {
        sort(c.begin(), c.end());
        long long s{}, count{}, i{};
        while(i<c.size()){
            s += c[i++];
            if(s<=co) count++;
        }
        return (int)count;
    }
};