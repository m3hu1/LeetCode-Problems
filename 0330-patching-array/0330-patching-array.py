class Solution:
    def minPatches(self, nums: List[int], n: int) -> int:
        ans = 0
        i = 0
        j = 0

        while j < len(nums):
            if i < len(nums) and nums[i] <= j + 1:
                j += nums[i]
                i += 1
            else:
                ans += 1
                j = j + (j + 1)
            
        return ans