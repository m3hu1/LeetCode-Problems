class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map <int, int> mp;
        mp[0] = 1;
        int ans = 0;
        int prefixSum = 0;
        for (auto i : nums) {
            prefixSum += i;
            if (mp.find(prefixSum - goal) != mp.end()) {
                ans += mp[prefixSum - goal];
            }
            mp[prefixSum]++;
        }
        return ans;
    }
};