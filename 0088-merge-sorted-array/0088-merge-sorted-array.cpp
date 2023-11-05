// m3hu1
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        while (i < n) {
            nums1.pop_back();
            i++;
        }
        copy(nums2.begin(), nums2.end(), inserter(nums1, nums1.begin()));
        sort(nums1.begin(),nums1.end());
    }
};