class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        l = 0
        r = len(nums) - 1

        while l < r:
            current_sum = nums[l] + nums[r]
            if current_sum < target:
                l += 1
            elif current_sum > target:
                r -= 1
            else:
                return [l + 1, r + 1]

        return [-1, -1]