class Solution:
    def minLength(self, s: str) -> int:
        while "AB" or "CD" in s:
            s = s.replace("AB","")
            s = s.replace("CD","")
        
        return len(s)