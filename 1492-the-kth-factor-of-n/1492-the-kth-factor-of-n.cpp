class Solution {
public:
    int kthFactor(int n, int k) {
        vector <int> ans;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) ans.push_back(i);
        }
        if (ans.size() < k) return -1;
        return ans[k - 1];
    }
};