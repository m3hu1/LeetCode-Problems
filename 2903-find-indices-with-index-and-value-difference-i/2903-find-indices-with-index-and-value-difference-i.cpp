class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int iD, int vD) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < nums.size(); j++) {
                if (
                    abs(i - j) >= iD && abs(nums[i] - nums[j] >= vD)
                ) return {i, j};
            }
        }
        return {-1, -1};
    }
};