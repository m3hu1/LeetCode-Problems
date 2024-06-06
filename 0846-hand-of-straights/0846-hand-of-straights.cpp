class Solution {
public:
    bool isNStraightHand(vector<int>& h, int gs) {
        if (h.size() % gs != 0) return false;
        sort(h.begin(), h.end());
        unordered_map <int, int> mp;
        for (auto i : h) mp[i]++;
        for (auto i : h) {
            if (mp[i] > 0) {
                for (int j = i; j < gs + i; j++) {
                    if (mp[j] <= 0) return false;
                    mp[j]--;
                }
            }
        }
        return true;
    }
};