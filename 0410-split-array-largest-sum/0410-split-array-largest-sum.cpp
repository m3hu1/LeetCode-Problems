class Solution {
public:
    bool isOK(int mid, int k, vector <int> &nums) {
        int cnt = 1;
        int curr = 0;
        for (auto i : nums) {
            if (i > mid) return false;
            curr += i;
            if (curr > mid) {
                cnt++;
                curr = i;
            }
        }
        return cnt <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = 0;
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (isOK(mid, k, nums)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};