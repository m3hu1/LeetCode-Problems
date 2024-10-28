class Solution:
    def longestSquareStreak(self, nums: List[int]) -> int:
        SET = set(nums)
        s = 0
        
        for num in SET:
            x = 1
            while num**2 in SET:
                x += 1
                num = num**2
            s = max(s, x)

        if s == 1:
            return -1
        
        return s