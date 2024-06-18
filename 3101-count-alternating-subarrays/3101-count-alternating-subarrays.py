class Solution:
    def countAlternatingSubarrays(self, nums: List[int]) -> int:
        dp = [1] * len(nums)
        ans = 0

        for i in range(1, len(nums)):
            if nums[i] != nums[i - 1]:
                dp[i] += dp[i - 1]
            ans += dp[i]
        
        return ans + 1