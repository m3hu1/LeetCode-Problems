class Solution:
    def maxWidthRamp(self, nums: List[int]) -> int:
        right_max = [0] * len(nums)
        idx = len(nums) - 1
        curr_max = 0

        for num in reversed(nums):
            right_max[idx] = max(num, curr_max)
            curr_max = right_max[idx]
            idx -= 1

        left = 0
        max_width = 0

        for right in range(len(nums)):
            while nums[left] > right_max[right]:
                left += 1
            max_width = max(max_width, right - left)

        return max_width