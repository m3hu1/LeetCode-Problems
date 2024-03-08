class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map <int, int> mp;
        int maxi = INT_MIN;
        int tot = 0;
        for(auto i : nums) {
            mp[i]++;
            if (mp[i] > maxi) {
                maxi = mp[i];
                tot = maxi;
            } else if (mp[i] == maxi) tot += maxi;
        }
        return tot;
    }
};