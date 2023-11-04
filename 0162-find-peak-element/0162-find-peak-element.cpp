// m3hu1
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int lo=0,hi=n-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int prev = (mid-1<0)?INT_MIN: nums[mid-1];
            int next = (mid+1>=n)?INT_MIN: nums[mid+1];
            if(nums[mid]>prev && nums[mid]>next){
                return mid;
            }
            else if(nums[mid]<next){
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return 0;
    }
};