class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long tot = 0;
        long long ans = -1;
        for(auto i : nums) {
            if(tot > i) {
                ans = tot + i;
            }
            tot += i;
        }
        return ans;
    }
};