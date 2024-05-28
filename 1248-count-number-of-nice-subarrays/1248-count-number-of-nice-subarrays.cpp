class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int o = 0;
        int ans = 0;
        int prefix = 0;
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] % 2 != 0) {
                o++;
                prefix = 0;
            }
            while (o == k && i <= j) {
                if (nums[i] % 2 != 0) o--;
                i++;
                prefix++;
            }
            ans += prefix;
        }
        return ans;
    }
};