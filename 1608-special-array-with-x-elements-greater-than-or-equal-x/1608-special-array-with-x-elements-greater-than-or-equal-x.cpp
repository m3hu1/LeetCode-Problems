class Solution {
public:
    int specialArray(vector<int>& nums) {
        int low = 1;
        int high = nums.size();
        while (low <= high) {
            int cnt = 0;
            int mid = low + (high - low) / 2;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] >= mid) cnt++;
            }
            if (cnt == mid) return mid;
            if (mid > cnt) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};