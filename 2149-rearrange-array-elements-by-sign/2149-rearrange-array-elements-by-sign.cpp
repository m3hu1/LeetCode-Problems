class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL);
        vector<int> ans(nums.size());
        int p = 0; // for positive index
        int n = 1; // for negative index
        for(int i=0; i<nums.size(); i++) {
            if(nums[i] > 0) {
                ans[p] = nums[i];
                p += 2;
            } else {
                ans[n] = nums[i];
                n += 2;
            }
        }
        return ans;
    }
};