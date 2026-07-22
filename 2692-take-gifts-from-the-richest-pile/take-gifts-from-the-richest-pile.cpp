class Solution {
public:
    long long pickGifts(vector<int>& g, int k) {
        priority_queue<int> m;
        for(int x : g) m.push(x);
        while(!m.empty() && k){
            long long t = m.top();
            m.pop();
            m.push(t/sqrt(t));
            k--;
        }
        long long s{};
        while(!m.empty()){
            s += m.top();
            m.pop();
        }
        return s;
    }
};