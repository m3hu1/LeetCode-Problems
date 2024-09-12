class Solution:
    def findMaximumScore(self, nums: List[int]) -> int:
        ans = 0
        maxi = 0

        for num in nums:
            ans += maxi
            maxi = max(maxi, num)
        
        return ans