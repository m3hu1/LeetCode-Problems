class Solution:
    def minSwaps(self, s: str) -> int:
        opened = 0

        for c in s:
            if c == '[':
                opened += 1
            elif opened > 0:
                opened -= 1
        
        return (opened + 1) // 2