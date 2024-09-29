class Solution:
    def minElement(self, nums: List[int]) -> int:
        def getDigitSum(num):
            digitSum = 0
            while num > 0:
                digitSum += num % 10
                num //= 10
            return digitSum
        
        for i in range(len(nums)):
            nums[i] = getDigitSum(nums[i])
        
        return min(nums)