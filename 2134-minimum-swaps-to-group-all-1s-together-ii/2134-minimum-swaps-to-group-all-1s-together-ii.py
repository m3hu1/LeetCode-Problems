class Solution:
    def minSwaps(self, nums: List[int]) -> int:
        SUM = sum(nums)
        ones = sum(nums[-1 * SUM : ])
        temp = ones

        for i in range(len(nums)):
            ones += nums[i] - nums[i - SUM]
            if ones > temp:
                temp = ones

        return SUM - temp