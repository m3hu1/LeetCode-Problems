class Solution:
    def canAliceWin(self, nums: List[int]) -> bool:
        a = sum(i for i in nums if i < 10)
        b = sum(i for i in nums if i >= 10)

        return not(a == b)