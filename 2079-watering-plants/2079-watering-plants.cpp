class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int ans = 0;
        int w = capacity;
        for (int i = 0; i < plants.size(); i++) {
            if (w >= plants[i]) {
                w -= plants[i];
                ans++;
            } else {
                w = capacity;
                ans = ans + i + 1;
                ans += i;
                w -= plants[i];
            }
        }
        return ans;
    }
};