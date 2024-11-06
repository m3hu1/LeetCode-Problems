class Solution:
    def maximumGap(self, nums: List[int]) -> int:
        if len(nums) < 2:
            return 0
        
        nums.sort()
        maxi = -math.inf

        for i in range(1, len(nums)):
            diff = nums[i] - nums[i - 1]
            maxi = max(maxi, diff)
        
        return maxi