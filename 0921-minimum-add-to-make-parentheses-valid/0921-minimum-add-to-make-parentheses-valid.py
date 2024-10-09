class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        opened = closed = 0

        for c in s:
            if c == '(':
                opened += 1
            elif opened > 0 and c == ')':
                opened -= 1
            else:
                closed += 1
            
        return opened + closed