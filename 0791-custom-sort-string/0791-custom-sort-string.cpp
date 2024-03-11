class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map <char, int> mp;
        string ans = "";
        for (auto i : s) mp[i]++;
        for (auto i : order) {
            while (mp[i] > 0) {
                ans.push_back(i);
                mp[i]--;
            }
        }
        for (auto [i, j] : mp) {
            while (j > 0) {
                ans.push_back(i);
                j--;
            }
        }
        return ans;
    }
};