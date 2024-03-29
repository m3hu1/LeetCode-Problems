class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int i = 0;
        int j = 0;
        int cnt = 0;
        long long ans = 0;
        int maxi = *max_element(nums.begin(), nums.end());
        while (j < nums.size()) {
            int val = nums[j];
            if (nums[j] == maxi) cnt++;
            while (cnt == k) {
                if (nums[i] == maxi) cnt--;
                i++;
            }
            ans += i;
            j++;
        }
        return ans;
    }
};