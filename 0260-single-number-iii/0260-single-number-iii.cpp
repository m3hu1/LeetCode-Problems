class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        // not optimal -> come later for bit manipulation soln
        unordered_map <int, int> mp;
        for (auto i : nums) mp[i]++;
        vector <int> ans;
        for (auto i : mp) {
            if (i.second != 2) ans.push_back(i.first);
        }
        return ans;
    }
};