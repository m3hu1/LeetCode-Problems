class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        set<int> mins;
        for (auto n : nums) {
            auto m = mins.lower_bound(n);
            if (m != mins.end())
                mins.erase(m);
            mins.insert(n);
        }
        return mins.size();
    }
};