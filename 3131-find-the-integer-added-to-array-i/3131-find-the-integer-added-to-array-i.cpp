class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        // int ans = nums2[0] - nums1[0];
        // return ans;
        int a = *max_element(nums1.begin(), nums1.end());
        int b = *max_element(nums2.begin(), nums2.end());
        return b - a;
    }
};