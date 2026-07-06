class Solution {
public:
    bool canShip(vector<int>& weights, int capacity, int days) {
    int usedDays = 1;
    int currentLoad = 0;
    for (int weight : weights) {
        if (currentLoad + weight <= capacity) {
            currentLoad += weight;
        } else {
            usedDays++;
            currentLoad = weight;
            if (usedDays > days)
                return false;
        }
    }
    return true;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int low{}, high{};
        for(int i=0; i<weights.size(); i++){
            low = max(low, weights[i]);
            high += weights[i];
        }
        int answer{};
        while (low <= high) {
            int mid = (low + high) / 2;
                if (canShip(weights, mid, days)) {
                answer = mid;
                high = mid - 1;   
            } else {
                low = mid + 1;    
            }
        }
        return answer;
    }
};