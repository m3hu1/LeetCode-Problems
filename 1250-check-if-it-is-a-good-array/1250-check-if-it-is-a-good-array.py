class Solution:
    def isGoodArray(self, nums: List[int]) -> bool:
        ans = 0

        for num in nums:
            ans = gcd(ans, num)
        
        if ans != 1:
            return False

        return True