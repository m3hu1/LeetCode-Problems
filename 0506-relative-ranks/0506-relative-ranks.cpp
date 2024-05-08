class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map <int, int> mp;
        vector <string> ans(score.size());
        for (int i = 0; i < score.size(); i++) mp[score[i]] = i;
        sort(score.begin(), score.end(), greater<int>());
        for (int i = 0; i < score.size(); i++) {
            if (i == 0) ans[mp[score[i]]] = "Gold Medal";
            else if (i == 1) ans[mp[score[i]]] = "Silver Medal";
            else if (i == 2) ans[mp[score[i]]] = "Bronze Medal";
            else ans[mp[score[i]]] = to_string(i + 1);
        }
        return ans;
    }
};