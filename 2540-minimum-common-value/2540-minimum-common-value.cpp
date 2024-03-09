class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        cin.tie(0);
        cout.sync_with_stdio(0);
        int i = 0;
        int j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) return nums1[i];
            else if (nums1[i] < nums2[j]) i++;
            else if (nums1[i] > nums2[j]) j++;
        }
        return -1;
    }
};