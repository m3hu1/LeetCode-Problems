class Solution:
    def minimizeArrayValue(self, nums: List[int]) -> int:
        ans = SUM = nums[0]

        for i in range(1, len(nums)):
            SUM += nums[i]
            ans = max(ans, (SUM + i) // (i + 1))
        
        return ans