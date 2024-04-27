class Solution {
public:
    int solve(int idx, int k, map <pair<int, int>, int> &check, string ring, string key) {
        if (k == key.size()) return 0;
        if (check.find({idx, k}) != check.end()) return check[{idx, k}];
        int ans = INT_MAX;
        for (int i = 0; i < ring.size(); i++) {
            if (ring[i] == key[k]) {
                int dist1 = ring.size() - abs(idx - i);
                int dist2 = abs(idx - i);
                int mini = min(dist1, dist2);
                ans = min(ans, solve(i, k + 1, check, ring, key) + mini + 1);
            }
        }
        check[{idx, k}] = ans;
        return ans;
    }

    int findRotateSteps(string ring, string key) {
        map <pair<int, int>, int> check;
        return solve(0, 0, check, ring, key);
    }
};