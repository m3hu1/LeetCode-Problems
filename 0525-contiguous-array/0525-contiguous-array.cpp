class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        unordered_map <int, int> mp;
        int zero = 0;
        int one = 0;
        int ans = 0;
        mp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) zero++;
            else one++;
            int diff = one - zero;
            if (mp.find(diff) == mp.end()) mp[diff] = i;
            else ans = max(ans, i - mp[diff]);
        }
        return ans;
    }
};