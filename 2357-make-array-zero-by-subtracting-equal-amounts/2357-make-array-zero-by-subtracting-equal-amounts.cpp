class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map <int, int> mp;
        for (auto num : nums) {
            if (num != 0) mp[num]++;
        }
        return mp.size();
    }
};