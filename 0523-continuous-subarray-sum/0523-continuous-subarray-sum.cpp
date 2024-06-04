class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        int ps = 0;
        mp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            ps += nums[i];
            if (mp.find(ps % k) == mp.end()) mp[ps % k] = i;
            else if (1 < i - mp[ps % k]) return true;
        }
        return false;
    }
};