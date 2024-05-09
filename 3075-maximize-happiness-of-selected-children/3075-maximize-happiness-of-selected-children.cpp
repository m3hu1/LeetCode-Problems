class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        long long ans = 0;
        int c = 0;
        for (int i = 0; i < k; i++) {
            ans += max(happiness[i] - c, 0);
            c++;
        }
        return ans;
    }
};