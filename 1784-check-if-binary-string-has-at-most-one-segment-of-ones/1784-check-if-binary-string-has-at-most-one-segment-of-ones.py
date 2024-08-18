class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        for i in range(1, len(s)):
            if s[i - 1] == '0' and s[i] == '1':
                return False
        
        return True