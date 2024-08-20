class Solution:
    def differenceOfSum(self, nums: List[int]) -> int:
        SUM = sum(nums)

        def getSum(x):
            res = 0
            while x > 0:
                d = x % 10
                res += d
                x = x // 10
            return res

        dSUM = 0

        for num in nums:
            curr_sum = getSum(num)
            dSUM += curr_sum
        
        return abs(SUM - dSUM)