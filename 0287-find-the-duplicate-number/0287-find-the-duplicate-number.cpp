class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++) {
            int target = nums[i];
            int low = i + 1;
            int high = nums.size() - 1;
            while(low <= high) {
                int mid = (low + high) / 2;
                if(nums[mid] == target) return nums[mid];
                else if(nums[mid] < target) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};