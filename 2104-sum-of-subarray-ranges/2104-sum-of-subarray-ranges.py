class Solution:
    def subArrayRanges(self, nums: List[int]) -> int:
        ans = 0

        for i in range(len(nums)):
            mini = float('inf')
            maxi = float('-inf')
            for j in range(i, len(nums)):
                mini = min(mini, nums[j])
                maxi = max(maxi, nums[j])
                ans = ans + (maxi - mini)
        
        return ans