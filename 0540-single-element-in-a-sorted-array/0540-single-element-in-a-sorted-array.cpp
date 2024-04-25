class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0]; // nums only has one element
        if(nums[0] != nums[1]) return nums[0]; // edge case for first element
        if(nums[n - 1] != nums[n - 2]) return nums[n - 1]; // edge case for last element
        int low = 0;
        int high = n - 2;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if(nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) {
                return nums[mid]; // single element found
            }
            if((mid % 2 == 1 && nums[mid] == nums[mid - 1]) 
            || (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
                low = mid + 1; // single element is on the right so remove left
            } else {
                high = mid - 1; // single element is on the left so remove right
            }
        }
        return -1;
    }
};