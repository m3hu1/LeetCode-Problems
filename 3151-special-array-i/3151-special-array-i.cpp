class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            // if (nums[i - 1] % 2 == 0) {
            //     if (nums[i] % 2 == 1) continue;
            //     else return false;
            // } else {
            //     if (nums[i] % 2 == 0) continue;
            //     else return false;
            // }
            if (nums[i - 1] % 2 == nums[i] % 2) return false;
        }
        return true;
    }
};