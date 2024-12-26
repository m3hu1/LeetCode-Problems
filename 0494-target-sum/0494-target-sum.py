class Solution:
    def findTargetSumWays(self, nums: List[int], t: int) -> int:
        @cache
        def helper(a, b):
            if a > len(nums) - 1:
                return 0
            if a == len(nums) - 1:
                return int(b == nums[-1]) + int(b == -1 * nums[-1])
            return helper(a + 1, b - nums[a]) + helper(a + 1, b + nums[a])

        return helper(0, t)