// m3hu1
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end()) ;
        int left = 0 ;
        int right = nums.size()-1 ;
        int minPairSum = INT_MIN ;
        while (left < right){
            int currentSum = nums[left] + nums[right] ;
            minPairSum = max(currentSum, minPairSum) ;
            left++ ;
            right-- ;
        }
        return minPairSum ;
    }
};