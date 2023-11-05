// m3hu1
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        ranges::sort(potions);
        --success;
        for (int& s : spells)
            s = end(potions) - ranges::upper_bound(potions, success/s);
        return spells;   
    }
};