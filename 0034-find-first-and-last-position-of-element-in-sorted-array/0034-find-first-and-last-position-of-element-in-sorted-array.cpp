class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        int lb = nums.size();
        int ub = nums.size();
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>=target){
                lb = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        low = 0;
        high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]>target){
                ub = mid;
                high = mid-1;
            } else {
                low = mid+1;
            }
        }
        vector<int> ans = {lb,ub-1};
        vector<int> notFound = {-1,-1};
        if(lb==nums.size() || nums[lb]!=target) return notFound;
        return ans;
    }
};