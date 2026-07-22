class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // priority_queue<pair<int ,int>> pq;
        // for(auto it : freq){
        //     pq.push({it.second, it.first});
        // }
        // vector<int> result;
        // for(int i=0; i<k; i++){
        //     result.push_back(pq.top().second);
        //     pq.pop();
        // }
        // return result;

        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int, int>> minHeap;
        for(auto& it : freq){
            minHeap.push({it.second, it.first});
        }
        vector<int> v;
        int x=0;
        while(x<k){
            v.push_back(minHeap.top().second);
            minHeap.pop();
            x++;
        }
        return v;
    }
};