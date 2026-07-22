class Solution {
public:
    int nthUglyNumber(int n) {
        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        unordered_set<long long> s;
        minHeap.push(1);
        s.insert(1);
        for(int i=2; i<=n; i++){
            long long t = minHeap.top();
            long long a = t * 2;
            long long b = t * 3;
            long long c = t * 5;
            if(!s.count(a)){
                s.insert(a);
                minHeap.push(a);
            }
            if(!s.count(b)){
                s.insert(b);
                minHeap.push(b);
            }
            if(!s.count(c)){
                s.insert(c);
                minHeap.push(c);
            }
            minHeap.pop();
        }
        return minHeap.top();
    }
};