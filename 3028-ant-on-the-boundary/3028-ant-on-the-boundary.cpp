class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int location = 0;
        int cnt = 0;
        for (int num : nums) {
            location += num;
            if (location == 0) cnt++;
        }
        return cnt;
    }
};