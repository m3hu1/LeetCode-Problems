class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        unordered_map <int, int> mp;
        int i = 0;
        int j = 0;
        int x = 0;
        int ans = 0;
        while (x < nums.size()) {
            mp[nums[x]]++;
            while (mp.size() > k) {
                mp[nums[i]]--;
                if (mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
                j = i;
            }
            while (mp[nums[i]] > 1) {
                mp[nums[i]]--;
                i++;
            }
            if (mp.size() == k) ans += i - j + 1;
            x++;
        }
        return ans;
    }
};