class Solution:
    def maxGoodNumber(self, nums: List[int]) -> int:
        n = len(nums)
        a = [bin(i)[2:] for i in nums]
        a.sort(key = lambda x: x * n, reverse=True)

        return int(''.join(a), 2)