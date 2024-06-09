class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        int currSum = 0;
        unordered_map <int, int> mp;
        mp[0] = 1;
        for (auto num : nums) {
            currSum += num;
            currSum %= k;
            if (currSum < 0) currSum += k;
            ans += mp[currSum];
            mp[currSum]++;
        }
        return ans;
    }
};