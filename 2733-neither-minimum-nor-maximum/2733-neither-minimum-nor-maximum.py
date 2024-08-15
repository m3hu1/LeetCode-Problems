class Solution:
    def findNonMinOrMax(self, nums: List[int]) -> int:
        maxi = max(nums)
        mini = min(nums)

        for num in nums:
            if num != maxi and num != mini:
                return num
        
        return -1