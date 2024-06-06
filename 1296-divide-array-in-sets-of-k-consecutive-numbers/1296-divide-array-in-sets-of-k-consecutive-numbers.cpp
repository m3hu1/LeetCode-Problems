class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        if (nums.size() % gs != 0) return false;
        sort(nums.begin(), nums.end());
        unordered_map <int, int> mp;
        for (auto i : nums) mp[i]++;
        for (auto i : nums) {
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