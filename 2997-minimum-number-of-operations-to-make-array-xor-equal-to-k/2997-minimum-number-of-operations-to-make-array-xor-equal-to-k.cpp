class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0;
        for (int i = 0; i < 20; i++) {
            int xorVal = 0;
            for (auto n : nums) {
                int bit = (1 << i) & n;
                xorVal = xorVal ^ bit;
            }
            int kBit = (1 << i) & k;
            if (xorVal != kBit) ans++;
        }
        return ans;
    }
};