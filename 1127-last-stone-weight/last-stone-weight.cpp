class Solution {
public:
    int lastStoneWeight(vector<int>& s) {
        priority_queue<int> MaxHeap;
        for(int x : s){
            MaxHeap.push(x);
        }
        while(MaxHeap.size() > 1){
            int x = MaxHeap.top();
            MaxHeap.pop();
            int y = MaxHeap.top();
            MaxHeap.pop();
            if(x == y) MaxHeap.push(0);
            else MaxHeap.push(x-y);
        }
        return MaxHeap.top();
    }
};