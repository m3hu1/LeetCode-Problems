class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int ans = 0;
        int i = 0;
        while (coins > 0) {
            if (coins >= costs[i]) {
                coins -= costs[i];
                ans++;
                if (i == costs.size() - 1) break;
                i++;
            } else break;
        }
        return ans;
    }
};