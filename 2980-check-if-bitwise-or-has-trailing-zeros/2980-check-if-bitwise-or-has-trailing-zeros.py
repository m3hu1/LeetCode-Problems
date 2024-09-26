class Solution:
    def hasTrailingZeros(self, nums: List[int]) -> bool:
        ans = [num for num in nums if num % 2 == 0]

        return len(ans) > 1