class Solution:
    def minStartValue(self, nums: List[int]) -> int:
        SUM = 0
        ans = 0

        for num in nums:
            SUM += num
            ans = min(ans, SUM)
        
        return 1 - ans