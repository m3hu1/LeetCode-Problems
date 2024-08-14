class Solution:
    def findNumbers(self, nums: List[int]) -> int:
        def getDigits(x: int) -> int:
            digit = 0
            while x > 0:
                digit += 1
                x = x // 10
            return digit

        ans = 0

        for num in nums:
            if getDigits(num) % 2 == 0:
                ans += 1
        
        return ans