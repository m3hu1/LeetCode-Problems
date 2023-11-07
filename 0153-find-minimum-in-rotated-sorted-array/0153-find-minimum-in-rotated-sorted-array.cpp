// m3hu1
class Solution {
public:
    int findMin(vector<int>& nums) {
        if(nums[0] <= nums[nums.size()-1]) return nums[0] ;
        int start = 0 , end = nums.size()-1, mid = start + ( end - start ) / 2 ;
        while( start <= end ){
            if( nums[mid] >= nums[0] ) start = mid + 1 ;
            else end = mid - 1 ; 
            mid = start + ( end - start ) / 2 ;
        }
        return nums[end + 1] ;
    }
};