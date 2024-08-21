class Solution:
    def sumOfUnique(self, nums: List[int]) -> int:
        SUM = 0
        count = Counter(nums)

        for num in nums:
            if count[num] == 1:
                SUM += num
        
        return SUM