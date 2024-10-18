class Solution:
    def countMaxOrSubsets(self, nums: List[int]) -> int:
        maxi = 0

        for num in nums:
            maxi = maxi | num

        @cache
        def helper(i, SUM):
            if i == len(nums):
                return 0 if SUM != maxi else 1
            return helper(i + 1, SUM | nums[i]) + helper(i + 1, SUM)
        
        return helper(0, 0)