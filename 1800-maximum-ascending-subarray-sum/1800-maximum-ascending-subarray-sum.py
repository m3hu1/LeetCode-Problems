class Solution:
    def maxAscendingSum(self, nums: List[int]) -> int:
        maxi = SUM = 0
        
        for i in range(len(nums)):
            if i == 0 or nums[i] > nums[i - 1]:
                SUM += nums[i]
            else:
                maxi = max(maxi, SUM)
                SUM = nums[i]
            
        maxi = max(maxi, SUM)
        
        return maxi