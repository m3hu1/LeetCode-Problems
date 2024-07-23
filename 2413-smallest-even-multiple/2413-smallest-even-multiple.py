class Solution:
    def smallestEvenMultiple(self, n: int) -> int:
        if n % 2 != 0:
            return 2 * n
        
        return n