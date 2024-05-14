class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map <char, int> mp;
        for (auto c : s) mp[c]++;
        int cnt = 0;
        for (auto c : t) {
            if (mp.find(c) == mp.end()) cnt++;
            else {
                mp[c]--;
                if (mp[c] == 0) mp.erase(c);
            }
        }
        for (auto i : mp) cnt += i.second;
        return cnt;
    }
};