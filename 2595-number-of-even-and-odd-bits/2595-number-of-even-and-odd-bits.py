class Solution:
    def evenOddBit(self, n: int) -> List[int]:
        odd, even, pos = 0, 0, 0

        while n > 0:
            curr = n % 2
            if n % 2 == 1:
                if pos % 2 != 0:
                    odd += 1
                else:
                    even += 1
            n = n // 2
            pos += 1
        
        return [even, odd]