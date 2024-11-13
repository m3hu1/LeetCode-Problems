class Solution:
    def countFairPairs(self, nums: List[int], lower: int, upper: int) -> int:
        nums.sort()

        def helper(wot):
            res = 0
            l, r = 0, len(nums) - 1
            while l < r:
                SUM = nums[l] + nums[r]
                if nums[l] + nums[r] <= wot:
                    res += r - l
                    l += 1
                else:
                    r -= 1
            return res
        
        return helper(upper) - helper(lower - 1)