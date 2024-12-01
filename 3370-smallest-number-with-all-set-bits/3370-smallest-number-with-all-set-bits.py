class Solution:
    def smallestNumber(self, n: int) -> int:
        for i in range(32):
            check = 2 ** i - 1
            if check >= n:
                return check