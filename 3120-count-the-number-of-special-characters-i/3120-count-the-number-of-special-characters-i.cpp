class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map <char, int> mp;
        for (char c : word) mp[c]++;
        int cnt = 0;
        for (auto i : mp) {
            if (mp.find(tolower(i.first)) != mp.end() && mp.find(toupper(i.first)) != mp.end()) cnt++;
        }
        return cnt >> 1;
    }
};