class Solution:
    def xorOperation(self, n: int, start: int) -> int:
        nums = [0 for _ in range(n)]
        ans = 0

        for i in range(n):
            nums[i] = start + 2 * i
            ans = ans ^ nums[i]
        
        return ans