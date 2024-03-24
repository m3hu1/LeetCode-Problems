class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);
        for(auto i : nums) {
            if(ans[i] == 0) ans[i]++;
            else return i;
        }
        return -1;
    }
};