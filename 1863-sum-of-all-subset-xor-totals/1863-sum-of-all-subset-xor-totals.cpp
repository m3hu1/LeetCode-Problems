class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int temp = 0;
        for (auto i : nums) temp = temp | i;
        return temp << nums.size() - 1;
    }
};