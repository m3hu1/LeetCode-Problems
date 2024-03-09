class Solution {
public:
    int maxOperations(vector<int>& nums) {
        int cnt = 0;
        int score = nums[0] + nums[1];
        for (int i = 0; i < nums.size() - 1; i += 2) {
            if (score == nums[i] + nums[i + 1]) cnt++;
            else break;
        }
        return cnt;
    }
};