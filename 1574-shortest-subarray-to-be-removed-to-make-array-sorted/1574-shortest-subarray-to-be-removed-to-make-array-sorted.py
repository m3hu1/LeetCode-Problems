class Solution:
    def findLengthOfShortestSubarray(self, nums: List[int]) -> int:
        low, high = 0, len(nums) - 1

        low = next((i for i in range(len(nums) - 1) if nums[i] > nums[i + 1]), len(nums) - 1)
        
        high = next((i for i in range(len(nums) - 1, 0, -1) if nums[i - 1] > nums[i]), 0)

        if high <= low:
            return 0

        ans = min(high, len(nums) - 1 - low)
        i, j = 0, high

        while i <= low and j < len(nums):
            if nums[i] > nums[j]:
                j += 1
            else:
                ans = min(ans, j - (i + 1))
                i += 1

        return 