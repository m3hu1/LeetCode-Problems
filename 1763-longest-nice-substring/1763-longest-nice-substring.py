class Solution:
    def longestNiceSubstring(self, s: str) -> str:
        for i in range(len(s)):
            if s[i].lower() not in s or s[i].upper() not in s:
                l = self.longestNiceSubstring(s[ : i])
                r = self.longestNiceSubstring(s[i + 1 : ])
                return r if len(r) > len(l) else l
        
        return s