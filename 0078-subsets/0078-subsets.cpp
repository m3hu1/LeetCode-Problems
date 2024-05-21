class Solution {
public:
    void bt(vector<int> &nums, vector<int> &subset, vector<vector<int>> &ans, int i) {
        if(i >= nums.size()) {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        bt(nums, subset, ans, i + 1);
        subset.pop_back();
        bt(nums, subset, ans, i + 1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        bt(nums, subset, ans, 0);
        return ans;
    }
};