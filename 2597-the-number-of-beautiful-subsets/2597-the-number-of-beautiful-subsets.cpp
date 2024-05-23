class Solution {
public:
    void bt(vector <int> &nums, unordered_map <int, int> &mp, int idx, int &cnt, int k) {
        if (idx == nums.size()) {
            cnt++;
            return;
        }
        if (!mp[nums[idx] + k] && !mp[nums[idx] - k]) {
            mp[nums[idx]]++;
            bt(nums, mp, idx + 1, cnt, k);
            mp[nums[idx]]--;
        }
        bt(nums, mp, idx + 1, cnt, k);
    }

    int beautifulSubsets(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        int cnt = 0;
        bt(nums, mp, 0, cnt, k);
        return cnt - 1;
    }
};