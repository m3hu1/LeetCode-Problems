class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(), satisfaction.end());
        int ans = 0;
        int sum = 0;
        for (int i = satisfaction.size() - 1; i >= 0; i--) {
            sum += satisfaction[i];
            if (sum < 0) break;
            ans += sum;
        }
        return ans;
    }
};