class Solution {
public:
    int countTriplets(vector<int>& nums) {
        // can't think of O(n) soln -> come later
        int ans = 0;
        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                x = x ^ nums[j];
                if (x == 0) ans = ans + (j - i);
            }
        }
        return ans;
    }
};