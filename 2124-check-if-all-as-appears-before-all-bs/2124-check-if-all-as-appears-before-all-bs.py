class Solution:
    def checkString(self, s: str) -> bool:
        for i in range(1, len(s)):
            if s[i] == 'a' and s[i - 1] == 'b':
                return False
        
        return True