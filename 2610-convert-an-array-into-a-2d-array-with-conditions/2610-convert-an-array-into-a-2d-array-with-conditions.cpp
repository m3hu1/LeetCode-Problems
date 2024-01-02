#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int> freq;
        int maxFreq{0};
        for (int n : nums) maxFreq = max(maxFreq, ++freq[n]);
        vector<vector<int>> ans(maxFreq);
        for (auto kvp : freq) while (kvp.second) ans[--kvp.second].emplace_back(kvp.first);
        return ans;
    }
};