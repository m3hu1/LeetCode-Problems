class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        int low = 0;
        int high = nums.size() - 1;
        int num = 0;
        for(int i = nums.size() - 1; i >= 0; i--) {
            if(abs(nums[low]) > abs(nums[high])) {
                num = nums[low];
                low++;
            } else {
                num = nums[high];
                high--;
            }
            ans[i] = num * num;
        }
        return ans;
    }
};